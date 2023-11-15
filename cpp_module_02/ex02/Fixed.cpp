/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:40:19 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/14 19:40:19 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() :_RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &overload)
{
	std::cout << "Copy assignment operator called "<< std::endl;
	this->setRawBits(overload.getRawBits());
	return (*this);

}

int Fixed::getRawBits(void) const
{
	return (_RawBits);
}

void Fixed::setRawBits(int const raw){
	this->_RawBits = raw;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = integer * (1 << _bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = std::roundf(floating_point * (1 << _bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_RawBits / (float) (1 << _bits));

}
int Fixed::toInt(void) const
{
	return (this->_RawBits >> _bits);
}
std::ostream &operator<<(std::ostream &stream, Fixed const &copy)
{
	stream << copy.toFloat();
	return (stream);
}

//ex02

bool Fixed::operator>(Fixed const &copy) const
{
	return (this->_RawBits > copy.getRawBits() ? true : false);
}

bool Fixed::operator<(Fixed const &copy) const
{
	return (this->_RawBits < copy.getRawBits() ? true : false);
}

bool Fixed::operator>=(Fixed const &copy) const
{
	return (this->_RawBits >= copy.getRawBits() ? true : false);
}

bool Fixed::operator<=(Fixed const &copy) const
{
	return (this->_RawBits <= copy.getRawBits() ? true : false);
}

bool Fixed::operator==(Fixed const &copy) const
{
	return (this->_RawBits == copy.getRawBits() ? true : false);
}

bool Fixed::operator!=(Fixed const &copy) const
{
	return (this->_RawBits != copy.getRawBits() ? true : false);
}

Fixed Fixed::operator+(Fixed const &copy)
{
	this->_RawBits += copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator-(Fixed const &copy)
{
	this->_RawBits -= copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(Fixed const &copy)
{
	this->_RawBits = (this->toFloat() * copy.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed Fixed::operator/(Fixed const &copy)
{
	this->_RawBits = (this->toFloat() / copy.toFloat()) * ( 1 << _bits);
	return (*this);
}

Fixed Fixed::operator++()
{
	this->_RawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed Fixed::operator--()
{
	this->_RawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--(*this);
	return (*this);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
	return(num1.getRawBits() > num2.getRawBits() ? num2 : num1);
}

Fixed const &Fixed::min(Fixed const &num1, Fixed const &num2)
{
	return(num1.getRawBits() > num2.getRawBits() ? num2 : num1);
}

Fixed &Fixed::max (Fixed &num1, Fixed &num2)
{
	return(num1.getRawBits() > num2.getRawBits() ? num1 : num2);
}

Fixed const &Fixed::max(Fixed const &num1, Fixed const &num2)
{
	return(num1.getRawBits() > num2.getRawBits() ? num1 : num2);
}

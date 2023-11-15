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
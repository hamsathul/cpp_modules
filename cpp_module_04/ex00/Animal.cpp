/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:41:51 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 21:41:51 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << GREEN << "Animal default constructor called." << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << CYAN << "Animal copy constructor called." << RESET << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &overload)
{
	std::cout << MAGENTA << "Animal copy assignment operator called" << RESET << std::endl;
	this->type = overload.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal destructor called." << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << BLUE << "Default animal sound." << RESET << std::endl;
}
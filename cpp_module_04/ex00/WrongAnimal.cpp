/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:32:34 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 08:32:34 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal default constructor called." << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << CYAN << "WrongAnimal copy constructor called." << RESET << std::endl;
	this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &overload)
{
	std::cout << MAGENTA << "WrongAnimal copy assignment operator called" << RESET << std::endl;
	this->type = overload.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "Default WrongAnimal sound." << RESET << std::endl;
}
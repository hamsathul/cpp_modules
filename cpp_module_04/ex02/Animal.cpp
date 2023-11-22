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

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << GREEN << "AAnimal default constructor called." << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << CYAN << "AAnimal copy constructor called." << RESET << std::endl;
	this->type = copy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &overload)
{
	std::cout << MAGENTA << "AAnimal copy assignment operator called" << RESET << std::endl;
	this->type = overload.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal destructor called." << RESET << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound(void) const
{
	std::cout << BLUE << "Default Aanimal sound." << RESET << std::endl;
}
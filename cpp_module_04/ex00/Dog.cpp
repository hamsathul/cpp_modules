/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:20:01 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 08:20:01 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << GREEN << "Dog default constructor called." << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << CYAN << "Dog copy constructor called." << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &overload)
{
	std::cout << MAGENTA << "Dog copy assignment operator called." << RESET << std::endl;
	Animal::operator=(overload);
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog destructor called." << RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << BLUE << "Dog says Bark...!!" << RESET << std::endl;
}
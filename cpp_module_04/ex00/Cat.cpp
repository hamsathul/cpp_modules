/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:20:52 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 22:20:52 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << GREEN << "Cat default constructor called." << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << CYAN << "Cat copy constructor called." << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &overload)
{
	std::cout << MAGENTA << "Cat copy assignment operator called." << RESET << std::endl;
	Animal::operator=(overload);
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << BLUE << "Cat says Meow...!!" << RESET << std::endl;
}
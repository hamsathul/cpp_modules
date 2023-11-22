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
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << CYAN << "Dog copy constructor called." << RESET << std::endl;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &overload)
{
	std::cout << MAGENTA << "Dog copy assignment operator called." << RESET << std::endl;
	Animal::operator=(overload);
	if (this->_brain != NULL)
		delete _brain;
	this->_brain = new Brain(*(overload._brain));
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog destructor called." << RESET << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << BLUE << "Dog says Bark...!!" << RESET << std::endl;
}

void Dog::printIdeas(void) const
{
	int i = 0;
	std::string idea = this->_brain->getIdea(i);
	
	while (!idea.empty() && i < 100)
	{
		std::cout << GREEN << "\"" << i + 1  << "." << idea << "\"" << RESET <<std::endl;
		idea = this->_brain->getIdea(i++);
	}
}

void Dog::setIdea(unsigned int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}
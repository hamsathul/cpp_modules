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

Cat::Cat(): AAnimal()
{
	std::cout << GREEN << "Cat default constructor called." << RESET << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy): AAnimal(copy)
{
	std::cout << CYAN << "Cat copy constructor called." << RESET << std::endl;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &overload)
{
	std::cout << MAGENTA << "Cat copy assignment operator called." << RESET << std::endl;
	AAnimal::operator=(overload);
	if (this->_brain != NULL)
		delete _brain;
	this->_brain = new Brain (*(overload._brain));
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat destructor called." << RESET << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << BLUE << "Cat says Meow...!!" << RESET << std::endl;
}

void Cat::printIdeas(void) const
{
	int i = 0;
	std::string idea = this->_brain->getIdea(i);
	
	while (!idea.empty() && i < 100)
	{
		std::cout << GREEN << "\"" << i + 1  << "." << idea << "\"" << RESET <<std::endl;
		idea = this->_brain->getIdea(i++);
	}
}


void Cat::setIdea(unsigned int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:23:22 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 09:23:22 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain default constructor called." << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << YELLOW << "Brain copy constructor called." << RESET << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &overload)
{
	std::cout << CYAN << "Brain copy assignment operator oveload called." << RESET << std::endl;
	for (unsigned int i = 0; i < 100; ++i)
		_ideas[i] = overload._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain destructor called." << RESET << std::endl;
}

const std::string &Brain::getIdea(unsigned int index) const
{
    try
    {
        if (index < 100)
        {
            return _ideas[index];
        }
        else
        {
            throw std::out_of_range("Index out of range");
        }
    }
    catch (const std::out_of_range &e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
        return _ideas[0];
    }
}
void Brain::setIdea(unsigned int index, std::string idea)
{
	 try
    {
        if (index < 100)
        {
            _ideas[index] = idea;
        }
        else
        {
            throw std::out_of_range("Index out of range");
        }
    }
    catch (const std::out_of_range &e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
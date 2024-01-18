/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:00:14 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 21:00:14 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << GREEN << "Intern default constructor called" << RESET << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << CYAN << "Intern copy constructor called" << RESET << std::endl;
	(void)copy;
}

Intern::~Intern()
{
	std::cout << RED << "Intern destructor called" << RESET << std::endl;
}

Intern &Intern::operator=(Intern overload)
{
	std::cout << BLUE << "Intern operator overload called" << RESET << std::endl;
	(void)overload;
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	static const std::string formNames[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};

	for(int i=0; i<3; i++)
	{
		if(name == formNames[i])
		{
			std::cout << CYAN << "Intern creates a " << formNames[i] << " Form" << RESET << std::endl;
			switch (i)
			{
				case 0:
					return new PresidentialPardonForm(name, target);
				case 1:
					return new RobotomyRequestForm(name, target);
				case 2:
					return new ShrubberyCreationForm(name, target);
			}
			
		}
	}
	std::cerr << YELLOW << "Intern failed to create a " << name << " form." << std::endl;
	return NULL;
}
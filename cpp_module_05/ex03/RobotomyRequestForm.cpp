/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:07:38 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 15:07:38 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 72, 45, "default")
{
	std::cout << GREEN << "Robotomy Request Form Default Constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target) : AForm(name, 72, 45, target)
{
	std::cout << GREEN << "Robotomy Request Form named constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	std::cout << CYAN << "Robotomy Request Form copy constructor called" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Robotomy Request Form destructor called" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm overload)
{
	std::cout << BLUE << "Robotomy Request Form operator overload called" << RESET << std::endl;
	(void)overload;
	return (*this);
}

void RobotomyRequestForm::formAction() const
{

	std::srand(std::time(0));
	int successRate = std::rand() % 2;

	std::cout << BLUE << "Making some drilling noises..." << RESET << std::endl;

	if (successRate == 1)
	{
		std::cout << GREEN << getTarget() << " has been robotomized successfully!" << RESET << std::endl;
	}
	else
	{
		std::cout << YELLOW << "Robotomy failed for " << getTarget() << "." << RESET << std::endl;
	}
}
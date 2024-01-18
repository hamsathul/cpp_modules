/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:04:28 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 19:04:28 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 25, 5, "default")
{
	std::cout << GREEN << "Presidential Pardon Form Constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const std::string target): AForm(name, 25, 5, target)
{
	std::cout << GREEN << "Presidential Pardon Form named constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy)
{
	std::cout << CYAN << "Presidential Pardon Form copy constructor called" << RESET << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Presidential Pardon Form destructor called" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm overload)
{
	std::cout << BLUE << "Presidential Pardon Form operator overload called" << RESET << std::endl;
	(void)overload;
	return(*this);
}

void PresidentialPardonForm::formAction() const
{
	std::cout << BLUE << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl; 
}
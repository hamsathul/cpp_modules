/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:48:23 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 20:48:23 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat b("zeus", 5);
	std::cout << b << std::endl;

	std::cout << MAGENTA << std::endl << "--- Srubbery Creation Form ---" << RESET << std::endl;
	ShrubberyCreationForm scf("home"); // sign: 145, exec: 137
	std::cout << scf << std::endl;
	b.signForm(scf);
	std::cout << scf << std::endl;
	b.executeForm(scf);

	std::cout << MAGENTA << std::endl << "--- Robotomy Request Form ---" << RESET << std::endl;
	RobotomyRequestForm rrf("Human"); // sign: 72, exec: 45
	std::cout << rrf << std::endl;
	b.signForm(rrf);
	std::cout << rrf << std::endl;
	b.executeForm(rrf);

	std::cout << MAGENTA << std::endl << "--- Presidential Pardon Form ---" << RESET << std::endl;
	AForm *ppf = new PresidentialPardonForm("TARGET"); // sign: 25, exec: 5
	std::cout << *ppf << std::endl;
	b.signForm(*ppf);
	std::cout << *ppf << std::endl;
	b.executeForm(*ppf);
	delete ppf;
	
}
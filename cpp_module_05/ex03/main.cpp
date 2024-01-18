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

#include <iostream>
#include "Intern.hpp"

int main()
{
	Intern i;

	std::cout << MAGENTA << std::endl << "--- Invalid Name ---" << RESET << std::endl;
	AForm *a = i.makeForm("Useless", "Invalid Target");
	delete a;
	
	std::cout << MAGENTA << std::endl << "--- Presidential Pardon Form ---" << RESET << std::endl;
	AForm *b = i.makeForm("Presidential Pardon", "Professor");
	std::cout << *b << std::endl;
	delete b;
	
	std::cout << MAGENTA << std::endl << "--- Robotomy Request Form ---" << RESET << std::endl;
	AForm *c = i.makeForm("Robotomy Request", "Robots");
	std::cout << *c << std::endl;
	delete c;
	
	std::cout << MAGENTA << std::endl << "--- Shrubbery Creation Form ---" << RESET << std::endl;
	AForm *d = i.makeForm("Shrubbery Creation", "Home");
	std::cout << *d << std::endl;
	delete d;

	std::cout << MAGENTA << std::endl << "--- Subject Test ---" << RESET << std::endl;
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	delete rrf;

	std::cout << MAGENTA << std::endl << "--- Full Application Test ---" << RESET << std::endl;
	Bureaucrat babu("John Doe", 5);
	AForm* ppf;
	ppf = i.makeForm("Presidential Pardon", "Bender");
	std::cout << *ppf << std::endl;
	babu.signForm(*ppf);
	std::cout << *ppf << std::endl;
	babu.executeForm(*ppf);
	std::cout << *ppf << std::endl;
	delete ppf;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:57:01 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 13:57:01 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137, "default")
{
	std::cout << GREEN << "Shrubbery Creation Form default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery Creation Form", 145, 137, target)
{
	std::cout << GREEN << "Shrubbery Creation Form named constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	std::cout << CYAN << "Shrubbery Creation Form copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Shrubbery Creation Form Destructor Called" << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm overload)
{
	std::cout << BLUE << "Shrubbery Creation Form Operator Overload Called" << RESET << std::endl;
	(void)overload;
	return(*this);
}

void ShrubberyCreationForm::formAction() const
{
	std::ofstream outputFile;
	outputFile.open((this->getTarget() + "_shrubbery").c_str());
	if (!outputFile)
	{
		std::cerr << RED << "Error: Unable to open file for writing." << RESET << std::endl;
	}
			
		outputFile <<"   ccee88ooPoObo8oo\n";
		outputFile << "  C8O8O8Q8PoOb o8oo\n";
		outputFile << " dOB69QO8PdUOpugoO9bD\n";
		outputFile << "CgggbU8OU qOp qOdoUOdcb\n";
		outputFile << "   6OuU  /p u gcoUodpP\n";
		outputFile << "     \\\\  ///  /douUP\n";
		outputFile << "        \\ ///\n";
		outputFile << "         |||/\\ \n";
		outputFile << "         |||//\n";
		outputFile << "         |||||\n";
		outputFile << "     ~~~~~ ~~~~\n";

}
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	std::cout << std::endl
			  << MAGENTA << "-- Valid Instantiation--" << RESET << std::endl;
	Form a;
	std::cout << a << std::endl;
	Form b("Application Form", 1, 25);
	std::cout << b << std::endl;

	std::cout << std::endl
			  << MAGENTA << "--Invalid Instantiation--" << RESET << std::endl;
	try
	{
		Form c("Invalid Application 1", 0, 40);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << YELLOW << "Cannot create Form because " << e.what() << RESET << std::endl;
	}

	try
	{
		Form c("Invalid Application 2", 40, 0);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cerr << YELLOW << "Cannot create Form because " << e.what() << RESET << std::endl;
	}

	try
	{
		Form c("Invalid Application 3", 151, 40);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << YELLOW << "Cannot create Form because " << e.what() << RESET << std::endl;
	}

	try
	{
		Form c("Invalid Application 4", 40, 151);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << YELLOW << "Cannot create Form because " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl << MAGENTA << "--Valid Form Signage--" << RESET << std::endl;
	Bureaucrat c("John Doe", 40);
	std::cout << c << std::endl;
	std::cout << a << std::endl;
	c.signForm(a);
	std::cout << a << std::endl;

	std::cout << std::endl << MAGENTA << "--Invalid Form Signange--" << RESET << std::endl;
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	c.signForm(b);
	std::cout << b << std::endl;
}
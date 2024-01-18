#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << std::endl
			  << MAGENTA << "-- Valid Instantiation --" << RESET << std::endl;
	Bureaucrat a;
	std::cout << a << std::endl;
	Bureaucrat b("John Doe", 1);
	std::cout << b << std::endl;
	Bureaucrat c;
	std::cout << c << std::endl;
	c = b;
	std::cout << c << std::endl;

	std::cout << std::endl
			  << MAGENTA << "-- Invalid Instantiation --" << RESET << std::endl;
	try
	{
		Bureaucrat c("Jane", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << YELLOW << "Cannot create Bureaucrat because " << e.what() << RESET << std::endl;
	}

	try
	{
		Bureaucrat c("Jack", 151);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << YELLOW << "Cannot create Bureaucrat because " << e.what() << RESET << std::endl;
	}

	std::cout << std::endl
			  << MAGENTA << "--Valid Increment/Decrement--" << RESET << std::endl;
	std::cout << b << std::endl;
	b.decGrade();
	std::cout << b << std::endl;
	b.incGrade();
	std::cout << b << std::endl;

	std::cout << std::endl
			  << MAGENTA << "--Invalid Increment/Decrement--" << RESET << std::endl;
	try
	{
		b.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << YELLOW << "Cannot increase " << b.getName() << "'s grade which is " << b.getGrade() << " because " << e.what() << RESET << std::endl;
	}

	try
	{
		a.decGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << YELLOW << "Cannot decrease " << a.getName() << "'s grade which is " << a.getGrade() << " because " << e.what() << RESET << std::endl;
	}
}
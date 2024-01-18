/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:12:26 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/22 19:12:26 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << GREEN << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << GREEN << "Bureaucrat " << this->_name << " named constructor called" << RESET << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << CYAN << "Bureaucrat copy constructor called." << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Bureaucrat destructor called." << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat overload)
{
	std::cout << BLUE << "Bureuaucrat Copy Assignment Operator Called" << RESET << std::endl;
	overload.swap(*this);
	return *this;
}

void Bureaucrat::swap(Bureaucrat &copy)
{	
	std::swap(this->_grade, copy._grade);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incGrade()
{
	if (this->_grade - 1 < 1)
	{

		throw(GradeTooHighException());
	}
	else
	{
		this->_grade--;
	}
}

void Bureaucrat::decGrade()
{
	if (this->_grade + 1 > 150)
	{
		throw(GradeTooLowException());
	}
	else
	{
		this->_grade++;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in)
{
	out << GREEN << "Bureaucrat  name: \"" << in.getName() << "\", Bureaucrat grade: " << in.getGrade()  << RESET;
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:45:29 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/15 09:45:29 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << GREEN << "Form default constructor called" << RESET << std::endl;
}

Form::Form(const std::string name, int req_sign_grade, int req_exec_grade) : _name(name), _signed(false), _sign_grade(req_sign_grade), _exec_grade(req_exec_grade)
{
	std::cout << GREEN << "Form " << this->_name << " named constructor called" << RESET << std::endl;
	if (req_sign_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (req_sign_grade > 150)
	{
		throw GradeTooLowException();
	}
	else if (req_exec_grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (req_exec_grade > 150)
	{
		throw GradeTooLowException();
	}
}

Form::Form(const Form &copy) : _name(copy._name), _signed(false), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade)
{
	std::cout << CYAN << "Form copy constructor called" << RESET << std::endl;
}

Form::~Form()
{
	std::cout << RED << "Form Destructor Called" << RESET << std::endl;
}

Form &Form::operator=(const Form &overload)
{
	std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
	(void)overload;
	return (*this);
}

const std::string Form::getName() const
{
	return (this->_name);
}
bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int Form::getExecGrade() const
{
	return (this->_exec_grade);
}

void Form::beSigned(const Bureaucrat &signer)
{
	if (this->_sign_grade < signer.getGrade())
	{
		throw GradeTooLowException();
	}
	else
	{
		this->_signed = true;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Form &in)
{
	out << GREEN << "Form name: " << in.getName() << " , signed: " 
	<< (in.getSigned() ? "yes" : "no") << " , Sign Grade: " << in.getSignGrade() 
	<< " , Exec Grade: " << in.getExecGrade() << RESET;
	return (out);
}

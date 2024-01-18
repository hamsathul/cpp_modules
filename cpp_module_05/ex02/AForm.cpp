/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:45:29 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/15 09:45:29 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _sign_grade(150), _exec_grade(150), _target("default")
{
	std::cout << GREEN << "AForm default constructor called" << RESET << std::endl;
}

AForm::AForm(const std::string name, int req_sign_grade, int req_exec_grade, const std::string target) : _name(name), _signed(false), _sign_grade(req_sign_grade), _exec_grade(req_exec_grade), _target(target)
{
	std::cout << GREEN << "AForm " << this->_name << " named constructor called" << RESET << std::endl;
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

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(false), _sign_grade(copy._sign_grade), _exec_grade(copy._exec_grade), _target(copy._target)
{
	std::cout << CYAN << "AForm copy constructor called" << RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << RED << "AForm Destructor Called" << RESET << std::endl;
}

AForm &AForm::operator=(const AForm &overload)
{
	std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
	(void)overload;
	return (*this);
}

const std::string AForm::getName() const
{
	return (this->_name);
}
bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getSignGrade() const
{
	return (this->_sign_grade);
}

int AForm::getExecGrade() const
{
	return (this->_exec_grade);
}

const std::string AForm::getTarget() const
{
	return (this->_target);
}

void AForm::beSigned(const Bureaucrat &signer)
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

void AForm::execute(const Bureaucrat &executor) const
{
	if (!this->_signed)
	{
		throw NotSignedException();
	} else if (this->_exec_grade < executor.getGrade()){
		throw GradeTooLowException();
	} else {
		this->formAction();
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("This form was not signed");
}

std::ostream &operator<<(std::ostream &out, const AForm &in)
{
	out << MAGENTA << "AForm name: " << in.getName() << " , signed: "
		<< (in.getSigned() ? "yes" : "no") << " , Sign Grade: " << in.getSignGrade()
		<< " , Exec Grade: " << in.getExecGrade() 
		<< " , Target: " << in.getTarget() << RESET;
	return (out);
}

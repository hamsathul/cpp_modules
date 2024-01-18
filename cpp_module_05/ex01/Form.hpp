/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:45:27 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/15 09:45:27 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string _name;
		bool _signed;
		const int _sign_grade;
		const int _exec_grade;
	
	public:
		Form();
		Form(const std::string name, int req_sign_grade, int req_exec_grade);
		Form(const Form &copy);
		virtual ~Form();

		Form &operator=(const Form &overload);

		const std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat &signer);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Form &in);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm {

	private:
		const std::string _name;
		bool _signed;
		const int _sign_grade;
		const int _exec_grade;
		const std::string _target;
	
	public:
		AForm();
		AForm(const std::string name, int req_sign_grade, int req_exec_grade, std::string target);
		AForm(const AForm &copy);
		virtual ~AForm();

		AForm &operator=(const AForm &overload);

		const std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		const std::string getTarget() const;
		void beSigned(const Bureaucrat &signer);
		void execute(const Bureaucrat &executor) const;
		virtual void formAction() const = 0;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class NotSignedException: public std::exception {
			public: 
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &in);

#endif
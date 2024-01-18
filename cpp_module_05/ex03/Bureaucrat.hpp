/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:13:57 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/22 19:13:57 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat overload);

		const std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		void signForm(AForm &form);
		void executeForm(const AForm &form);

		void swap(Bureaucrat &copy);

		class GradeTooHighException: public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception{
			public:
				virtual const char *what() const throw();
		};


};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in);




#endif
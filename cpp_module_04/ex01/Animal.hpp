/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:02 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:02 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define RED "\e[31m"
# define RESET "\e[0m"

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &overload);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound(void) const;
};
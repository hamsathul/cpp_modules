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

class AAnimal
{
	protected:
		std::string type;
	
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &overload);
		virtual ~AAnimal() = 0;

		std::string getType() const;
		virtual void makeSound(void) const = 0;
};
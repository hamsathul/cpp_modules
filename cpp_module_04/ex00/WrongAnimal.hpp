/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:31:33 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 08:31:33 by hkunnam-         ###   ########.fr       */
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

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &overload);
		virtual ~WrongAnimal();

		std::string getType() const;
		virtual void makeSound(void) const;
};
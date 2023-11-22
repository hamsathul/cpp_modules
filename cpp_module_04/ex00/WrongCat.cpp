/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 08:35:44 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/21 08:35:44 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << GREEN << "WrongCat default constructor called." << RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << CYAN << "WrongCat copy constructor called." << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &overload)
{
	std::cout << MAGENTA << "WrongCat copy assignment operator called." << RESET << std::endl;
	WrongAnimal::operator=(overload);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat destructor called." << RESET << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << BLUE << "WrongCat says purrrrr...!!" << RESET << std::endl;
}
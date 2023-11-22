/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:08:13 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/20 22:08:13 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
	// std::cout << CYAN << "\n****************************TESTING AANIMAL*************\n" << RESET << std::endl;
	// AAnimal *animal = new AAnimal();
	// delete animal;
	std::cout << CYAN << "\n****************************TESTING CAT *************\n" << RESET << std::endl;
	AAnimal *cat = new Cat();
	cat->makeSound();
	delete cat;
	std::cout << CYAN << "\n****************************TESTING DOG*************\n" << RESET << std::endl;
	AAnimal *dog = new Dog();
	dog->makeSound();
	delete dog;

	return (0);
}

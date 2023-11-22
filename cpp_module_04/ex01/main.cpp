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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main(void)
{
	{
		Animal *animal[10];

		std::cout << GREEN << "Animal array is being filled" << RESET << std::endl;
		for (int i = 0; i < 10; i++)
		{
			if(i % 2 == 0)
			{
				animal[i] = new Cat();
			}
			else
				animal[i] = new Dog();
		}
		std::cout << CYAN << "\n*********************CHECKING ANIMAL ATTRIBUTES********************\n" << RESET << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << YELLOW << animal[i]->getType() << RESET << std::endl;
			animal[i]->makeSound();
		}

		std::cout << CYAN << "\n**************DELETING ANIMAL ARRAY***************\n" << RESET << std::endl;
		for(int i = 0; i < 10; i++)
			delete animal[i];
	}

		std::cout << CYAN << "\n****************************TESTING CAT BRAIN*************\n" << RESET << std::endl;
	{
		Cat cat;
		std::cout << CYAN << "****************************SETTING IDEAS*************\n" << RESET << std::endl;
		for (int i = 0; i < 100; i++)
			cat.setIdea(i, "Cat idea ");

		std::cout << CYAN << "****************************IDEAS SET*************\n" << RESET << std::endl;
		std::cout << CYAN << "****************************PRINTING IDEAS*************\n" << RESET << std::endl;
		cat.printIdeas();
	}
		std::cout << CYAN << "****************************TESTING DOG BRAIN*************\n" << RESET << std::endl;
	{
		Dog dog;
		std::cout << CYAN << "****************************SETTING IDEAS*************\n" << RESET << std::endl;
		for (int i = 0; i < 100; i++)
			dog.setIdea(i, "Dog idea ");

		std::cout << CYAN << "****************************IDEAS SET*************\n" << RESET << std::endl;
		std::cout << CYAN << "****************************PRINTING IDEAS*************\n" << RESET << std::endl;
		dog.printIdeas();
	}
		std::cout << CYAN << "****************************SUBJECT TEST*************\n" << RESET << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << CYAN << "\n*****************************************\n" << RESET << std::endl;
	return 0;
}
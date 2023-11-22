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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << CYAN << "\n********************TEST ANIMAL*********************\n" << RESET << std::endl;
	{	Animal animal;
		Animal otherAnimal(animal);
		Animal newAnimal;
		newAnimal = animal;
		std::cout << YELLOW << "Type: " << animal.getType() << RESET << std::endl;
		animal.makeSound();
	}
	std::cout << CYAN << "\n************************TEST CAT*****************\n" << RESET << std::endl;
	{
		Cat *cat = new Cat();
		Cat otherCat(*cat);
		Cat *newCat = new Cat();
		*newCat = *cat;
		std::cout << YELLOW << "Type: " << cat->getType() << RESET << std::endl;
		std::cout << YELLOW << "Type: " << newCat->getType() << RESET << std::endl;
		cat->makeSound();
		newCat->makeSound();
		delete cat;
		delete newCat;
	}
	std::cout << CYAN << "\n**************************TEST DOG***************\n" << RESET << std::endl;
	{
		Dog *dog = new Dog();
		Dog otherDog(*dog);
		Dog *newDog = new Dog();
		*newDog = *dog;
		std::cout << YELLOW << "Type: " << dog->getType() << RESET << std::endl;
		std::cout << YELLOW << "Type: " << newDog->getType() << RESET << std::endl;
		dog->makeSound();
		newDog->makeSound();
		delete dog;
		delete newDog;
	}
	std::cout << CYAN << "\n***********************TEST WRONG ANIMAL******************\n" << RESET << std::endl;
	{	
		WrongAnimal animal;
		WrongAnimal otherAnimal(animal);
		WrongAnimal newAnimal;
		newAnimal = animal;
		std::cout << YELLOW << "Type: " << animal.getType() << RESET << std::endl;
		animal.makeSound();
	}
	std::cout << CYAN << "\n*************************TEST WRONG CAT****************\n" << RESET << std::endl;

	{
		WrongCat *cat = new WrongCat();
		WrongCat otherCat(*cat);
		WrongCat *newCat = new WrongCat();
		*newCat = *cat;
		std::cout << YELLOW << "Type: " << cat->getType() << RESET << std::endl;
		std::cout << YELLOW << "Type: " << newCat->getType() << RESET << std::endl;
		cat->makeSound();
		newCat->makeSound();
		delete cat;
		delete newCat;
	}
	std::cout << CYAN << "\n*****************************************\n" << RESET << std::endl;

{	
	std::cout << CYAN << "\n*********************SUBJECT TEST********************\n" << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << YELLOW << "Type: " << j->getType() << " " << RESET << std::endl;
	std::cout << YELLOW << "Type: " << i->getType() << " " << RESET << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
}
{
	std::cout << CYAN << "\n***********************SUBJECT WRONG CAT TEST******************\n" << RESET << std::endl;
	const WrongAnimal *wrongAnimal = new WrongCat();
	std::cout << YELLOW << "Type: " << wrongAnimal->getType() << " " << RESET << std::endl;
	wrongAnimal->makeSound();
	delete wrongAnimal;
	std::cout << CYAN << "\n*****************************************\n" << RESET << std::endl;
}
	return 0;
}
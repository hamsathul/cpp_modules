/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:11:52 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 12:11:52 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *base = NULL;
	std::srand(time(NULL));
	int number = std::rand() % 3;

	if (number == 0)
	{
		base = new A();
		std::cout << GREEN << "The instantited class is A" << RESET << std::endl;
	}
	else if (number == 1)
	{
		base = new B();
		std::cout << GREEN << "The instantited class is B" << RESET << std::endl;
	}
	else if (number == 2)
	{
		base = new C();
		std::cout << GREEN << "The instantited class is C" << RESET << std::endl;
	}
	return base;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << GREEN << "The actual type of the object pointed to by (*p) A" << RESET << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << GREEN << "The actual type of the object pointed to by (*p) B" << RESET << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << GREEN << "The actual type of the object pointed to by (*p) C" << RESET << std::endl;
	else
		std::cout << GREEN << "The actual type of the object pointed to by (*p) NULL" << RESET << std::endl;
}
void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << GREEN << "The actual type of the object pointed to by (&p) A" << RESET << std::endl;
		return;
	}
	catch (const std::exception &e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << GREEN << "The actual type of the object pointed to by (&p) B" << RESET << std::endl;
		return;
	}
	catch (const std::exception &e)	{}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << GREEN << "The actual type of the object pointed to by (&p) C" << RESET << std::endl;
		return;
	}
	catch (const std::exception &e)	{}
	std::cout << GREEN << "The actual type of the object pointed to by (&p) NULL" << RESET << std::endl;
}

int main()
{
	Base *basePointer = generate();
	identify(basePointer);
	identify(*basePointer);

	delete basePointer;
}
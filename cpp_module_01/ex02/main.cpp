/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:57:39 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/13 16:51:34 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "************************************" << std::endl;
	std::cout << "          STRING				      " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "String Pointer : " << *stringPTR << std::endl;
	std::cout << "String Reference : " << stringREF << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "          MEMORY ADDRESS			  " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << &brain << std::endl;
	std::cout << "String Pointer : " << stringPTR << std::endl;
	std::cout << "String Reference : " << &stringREF << std::endl;
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:57:39 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/10 12:12:38 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPtr = &brain;
	std::string &stringRef = brain;

	std::cout << "************************************" << std::endl;
	std::cout << "          STRING				      " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << brain << std::endl;
	std::cout << "String Pointer : " << *stringPtr << std::endl;
	std::cout << "String Reference : " << stringRef << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "          MEMORY ADDRESS			  " << std::endl;
	std::cout << "************************************" << std::endl;
	std::cout << "String : " << &brain << std::endl;
	std::cout << "String Pointer : " << stringPtr << std::endl;
	std::cout << "String Reference : " << &stringRef << std::endl;
	
}
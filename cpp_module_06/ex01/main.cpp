/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:25:34 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 11:25:34 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data myData = {42, "Haris"};
	std::cout << GREEN << "Data: Id: " << myData.id << "  Name: " << myData.name << RESET  << std::endl;
	std::cout << MAGENTA << "Data Address:  " << &myData << RESET << std::endl;
	std::cout << GREEN << "---------------------------------------------------" << RESET << std::endl;

	std::cout << CYAN << "Serializing Data " << RESET << std::endl;
	uintptr_t serializedPtr = Serializer::serialize(&myData);
	std::cout << GREEN "Data serialized to uintptr_t: " << serializedPtr << RESET << std::endl;

	std::cout << GREEN << "---------------------------------------------------" << RESET << std::endl;
	
	std::cout << CYAN << "Deserializing Data " << RESET << std::endl;
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout << YELLOW << "Deserialized Data Address: " << deserializedPtr << RESET << std::endl;
	std::cout << MAGENTA << "*Deserialized data: Id: " << deserializedPtr->id << " Name: " << deserializedPtr->name << RESET << std::endl;

	std::cout << GREEN << "---------------------------------------------------" << RESET << std::endl;
	if (&myData == deserializedPtr)
		std::cout << GREEN << "Serialization and Deserialization successful." << RESET << std::endl;
	else
		std::cout << RED << "Serialization and Deserialization Failed." << RESET << std::endl;
}
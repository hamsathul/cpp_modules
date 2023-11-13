/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:34:44 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/13 12:11:56 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cstdio>

void clearInputBuffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

std::string check_length(std::string data)
{
	if (data.length() > 10)
	{
		data.resize(9);
		data += ".";
	}

	return (data);
}

int main(void)
{
	PhoneBook Phone;
	std::string command;
	int	prompt_index;
	Phone.counter = 0;

	while (1)
	{
		system("clear");
		std::cout << "COMMANDS" <<std::endl;
		std::cout << "1	ADD" <<std::endl;
		std::cout << "2	SEARCH" <<std::endl;
		std::cout << "3	EXIT" <<std::endl;
		std::cin >> command;

		if (command == "1" || command == "ADD")
		{

			system("clear");
			std::cout << "PLEASE ADD CONTACTS" << std::endl;
			if (Phone.counter == 8)
			{
				for (int i = 1; i < Phone.counter; i++)
					Phone.Contacts[i - 1] = Phone.Contacts[i];

				Phone.counter--;
			}
				
				std::cout << "PLEASE ENTER THE FIRST NAME" << std::endl;
				std::cin >> std::ws;
				std::getline(std::cin, Phone.Contacts[Phone.counter].First_Name);
				while (Phone.Contacts[Phone.counter].First_Name.empty()) {
					std::cout << "Invalid input! Please enter a non-empty value for First Name." << std::endl;
					std::getline(std::cin, Phone.Contacts[Phone.counter].First_Name);
				}
				system("clear");
				
				std::cout << "PLEASE ENTER THE LAST NAME" << std::endl;
				std::cin >> std::ws;
				std::getline(std::cin, Phone.Contacts[Phone.counter].Last_Name);
				while (Phone.Contacts[Phone.counter].Last_Name.empty()) {
					std::cout << "Invalid input! Please enter a non-empty value for Last Name." << std::endl;
					std::getline(std::cin, Phone.Contacts[Phone.counter].Last_Name);
				}
				system("clear");
				
				std::cout << "PLEASE ENTER THE NICKNAME" << std::endl;
				std::cin >> std::ws;
				std::getline(std::cin, Phone.Contacts[Phone.counter].Nickname);
				while (Phone.Contacts[Phone.counter].Nickname.empty()) {
					std::cout << "Invalid input! Please enter a non-empty value for Nick Name." << std::endl;
					std::getline(std::cin, Phone.Contacts[Phone.counter].Nickname);
				}				
				system("clear");

				std::cout << "PLEASE ENTER THE PHONE NUMBER" << std::endl;
				std::cin >> std::ws;
				std::getline(std::cin, Phone.Contacts[Phone.counter].Phone_Number);	
				while (Phone.Contacts[Phone.counter].Phone_Number.empty()) {
					std::cout << "Invalid input! Please enter a non-empty value for Phone Number." << std::endl;
					std::getline(std::cin, Phone.Contacts[Phone.counter].Phone_Number);
				}				
				system("clear");

				std::cout << "PLEASE ENTER THE DARKEST SECRET" << std::endl;
				std::cin >> std::ws;
				std::getline(std::cin, Phone.Contacts[Phone.counter].Darkest_Secret);
				while (Phone.Contacts[Phone.counter].Darkest_Secret.empty()) {
					std::cout << "Invalid input! Please enter a non-empty value for Darkest Secret." << std::endl;
					std::getline(std::cin, Phone.Contacts[Phone.counter].Darkest_Secret);
				}				
			Phone.counter++;			
		}
		else if (command == "2" || command == "SEARCH")
		{
			system("clear");
			std::cout << std::right << "|";
			std::cout << std::right << std::setw(10) << "INDEX" << "|";
			std::cout << std::right << std::setw(10) << "FIRST NAME" << "|";
			std::cout << std::right << std::setw(10) << "LAST NAME" << "|";
			std::cout << std::right << std::setw(10) << "NICKNAME" << "|" <<std::endl;

			for (int i = 0; i < Phone.counter; i++)
			{
				std::cout << std::right << "|";
				std::cout << std::right << std::setw(10) << i + 1 <<"|";
				std::cout << std::right << std::setw(10) << check_length(Phone.Contacts[i].First_Name) << "|";
				std::cout << std::right << std::setw(10) << check_length(Phone.Contacts[i].Last_Name) << "|";
				std::cout << std::right << std::setw(10) << check_length(Phone.Contacts[i].Nickname) << "|" << std::endl;

			}
			std::cout << "PLEASE ENTER AN INDEX" <<std::endl;
			std::cin >> prompt_index;
			prompt_index--;

			if (prompt_index >= 0 && prompt_index < Phone.counter) 
			{
				system("clear");

				std::cout << std::right << "FIRST NAME		:	" <<Phone.Contacts[prompt_index].First_Name << std::endl;
				std::cout << std::right << "LAST NAME		:	" <<Phone.Contacts[prompt_index].Last_Name << std::endl;
				std::cout << std::right << "NICKNAME		:	" <<Phone.Contacts[prompt_index].Nickname << std::endl;
				std::cout << std::right << "PHONE NUMBER		:	" <<Phone.Contacts[prompt_index].Phone_Number << std::endl;
				std::cout << std::right << "DARKEST SECRET		:	" <<Phone.Contacts[prompt_index].Darkest_Secret << std::endl;
			
				while (1) 
				{
					std::cout << "PLEASE TYPE BACK OR 1 TO GO BACK" << std::endl;
					std::cin >> command;
					if (command == "1" || command == "BACK")
						break;
				}
			} 
			else 
			{
				std::cin.clear();
				clearInputBuffer();
				while (1) 
				{
					std::cout << "INVALID INDEX PLEASE TYPE BACK OR 1 TO GO BACK" << std::endl;
					std::cin >> command;
					if (command == "1" || command == "BACK")
						break;
				}
					std::cin.clear();
					clearInputBuffer();
			}
		}
		else if (command == "3" || command == "EXIT")
			break ;
		command = "4";
	}
	
}
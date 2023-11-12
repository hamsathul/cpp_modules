/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:53:40 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/11 01:22:18 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl(void)
	{
		return ;
	}
	Harl::~Harl(void)
	{
		return ;
	}

	void Harl::debug( void )
	{
		std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	}

	void Harl::info( void )
	{
		std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	}

	void Harl::warning( void )
	{
		std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}

	void Harl::error( void )
	{
		std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
	}

	void Harl::complain( std::string level )
	{
		void (Harl::*functions[4])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};

	int i = ("DEBUG" == level) * 1
		+ ("INFO" == level) * 2
		+ ("WARNING" == level) * 3
		+ ("ERROR" == level) * 4;

		switch (i)
		{
			case 0:
				std::cout << "[NOTHING]: I just dont like his face" << std::endl;
				break ;
			case 1:
				(this->*functions[0])();
				i++;
				// intentional fallthrough
			case 2:
				(this->*functions[1])();
				i++;
				// intentional fallthrough

			case 3:
				(this->*functions[2])();
				i++;
				// intentional fallthrough
			case 4:
				(this->*functions[3])();
				i++;
				
		}
	}
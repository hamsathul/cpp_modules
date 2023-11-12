/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:53:40 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/11 00:11:21 by hkunnam-         ###   ########.fr       */
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

		std::string levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};

		int i;

		for (i = 0; i < 4; i++)
		{
			if (levels[i] == level)
			{
				(this->*functions[i])();
				break;
			}
		}
		if (i == 4)
			std::cout << "[NOTHING]: I just dont like his face" << std::endl;


	}
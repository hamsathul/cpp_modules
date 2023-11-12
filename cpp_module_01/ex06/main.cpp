/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:53:43 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/11 01:19:47 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac !=2)
	{
		std::cout << "PLEASE ENTER A LEVEL |DEBUG|INFO|WARNING|ERROR" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	
}

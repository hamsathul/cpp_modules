/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:56:33 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/19 18:56:33 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
{	ClapTrap john("johnDoe");
	for (int i = 0; i < 5; i++)
		john.attack("a zombie horde");
	std::cout << "\033[35m" <<"Zombie horde attacks back with pitchforks" << "\033[m" << std::endl;
	john.takeDamage(5);
	john.beRepaired(5);
}
{
	ClapTrap zeus("zeus");
	for (int i = 0; i < 7; i++){
		zeus.attack("zombie boss");
		std::cout << "\033[35m" <<"Zombie boss attacks back with a sword" << "\033[m" << std::endl;
		zeus.takeDamage(5);
		zeus.beRepaired(6);
	}

}
return (0);
}
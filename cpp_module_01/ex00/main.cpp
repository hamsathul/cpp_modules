/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:25:47 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/09 22:56:03 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

const std::string randomZombies[] = {
	"Zombie001 on stack",
	"Zombie002 on stack",
	"Zombie003 on stack",
	"Zombie004 on stack",
	"Zombie005 on stack",
};

int main(void)
{
	Zombie *zombie_heap;

	zombie_heap = newZombie("Abe on heap");
	zombie_heap->announce();
	delete zombie_heap;
	for (int i = 0; i < 5; i++)
		randomChump(randomZombies[i]);
}
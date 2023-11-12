/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:50:51 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/03 20:50:51 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
			std::cout<<" ";
		}
	}
	std::cout << std::endl;
	return (0);
}
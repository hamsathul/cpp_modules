/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:22:41 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 13:22:41 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int intArray[5] = {5,25,45,30,1};
	float floatArray[6] = {4.53,6.75,2.34,1.05,6.75};

	std::string stringArray[4] = {"42", "abudhabi", "school", "mina"};

	std::cout << MAGENTA << "---- Result of int Array ----" << RESET << std::endl;
	iter<int>(intArray, 5, printElement);
	std::cout << MAGENTA << "---- Result of float Array ----" << RESET << std::endl;
	iter<float>(floatArray, 6, printElement);
	std::cout << MAGENTA << "---- Result of string Array ----" << RESET << std::endl;
	iter<std::string>(stringArray, 4, printElement);
}
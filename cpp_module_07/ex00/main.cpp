/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:07:18 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 13:07:18 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << MAGENTA << "-----------Before Swap----------" << RESET << std::endl;
	std::cout << GREEN << "a = " << a << ", b = " << b << RESET << std::endl;
	::swap(a, b);
	std::cout << MAGENTA << "-----------After Swap----------" << RESET << std::endl;
	std::cout << GREEN << "a = " << a << ", b = " << b << RESET << std::endl;
	std::cout << GREEN << "min( a, b ) = " << ::min(a, b) << RESET << std::endl;
	std::cout << GREEN << "max( a, b ) = " << ::max(a, b) << RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << MAGENTA << "-----------Before Swap----------" << RESET << std::endl;
	std::cout << GREEN << "c = " << c << ", d = " << d << RESET << std::endl;
	::swap(c, d);
	std::cout << MAGENTA << "-----------After Swap----------" << RESET << std::endl;
	std::cout << GREEN << "c = " << c << ", d = " << d << RESET << std::endl;
	std::cout << GREEN << "min( c, d ) = " << ::min(c, d) << RESET << std::endl;
	std::cout << GREEN << "max( c, d ) = " << ::max(c, d) << RESET << std::endl;
	return 0;
}
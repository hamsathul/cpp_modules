/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:04:19 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 19:04:19 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStatck.hpp"

int main()
{
	MutantStatck<int> mstack;
	std::cout << MAGENTA << "-----Mutant Stack Example-----" << RESET << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << GREEN << "Top Value in Mutant Stack: " << mstack.top() << RESET << std::endl;
	mstack.pop();
	std::cout << RED << "Top Value in Mutant Stack deleted " << RESET << std::endl;
	std::cout << GREEN << "Mutant Stack size: " <<  mstack.size() << RESET << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStatck<int>::iterator it = mstack.begin();
	MutantStatck<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << MAGENTA << "-----Mutant Stack Content-----" << RESET << std::endl;
	while (it != ite)
	{
		std::cout << YELLOW <<  *it << RESET << std::endl;
		++it;
	}
	std::cout << MAGENTA << "--------------------------------" << RESET << std::endl;
	std::stack<int> s(mstack);
	std::cout << GREEN << "Stack size: " << s.size() << RESET << std::endl;
	
	std::cout << MAGENTA << "-----List Example-----" << RESET << std::endl;

	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << GREEN << "Top Value in List: " << list.back() << RESET << std::endl;
	list.pop_back();
	std::cout << RED << "Top Value in List deleted" << RESET << std::endl;
	std::cout << GREEN << "List size: " <<  list.size() << RESET << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator listBegin = list.begin();
	std::list<int>::iterator listEnd = list.end();

	++listBegin;
	--listBegin;

	std::cout << MAGENTA << "-----List Content-----" << RESET << std::endl;
	while (listBegin != listEnd)
	{
		std::cout << YELLOW <<  *listBegin << RESET << std::endl;
		++listBegin;
	}
	std::cout << MAGENTA << "--------------------------------" << RESET << std::endl;
	std::list<int> ss(list);
	std::cout << GREEN << "List size: " << ss.size() << RESET << std::endl;

}
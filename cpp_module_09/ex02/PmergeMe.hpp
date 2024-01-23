/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:36:28 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/23 11:36:28 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

#include <iostream>
#include <ctime>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <deque>
#include <vector>

class PmergeMe
{
	public:
		
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		//Vector sort functions

		void mergeInsertSortVector(std::vector<int> &container, int start, int end);
		void mergeSortVector(std::vector<int> &container, int start, int mid, int end);
		void insertSortVector(std::vector<int> &container, int start, int end);

		//Deque sort functions
		
		void mergeInsertSortDeque(std::deque<int> &container, int start, int end);
		void mergeSortDeque(std::deque<int> &container, int start, int mid, int end);
		void insertSortDeque(std::deque<int> &container, int start, int end);

		void runVector(std::vector<int> &container);
		void runDeque(std::deque<int> &container);

		void calculateTime(std::vector<int> &vector, std::deque<int> &deque, double &vecTime, double &deqTime);
		void print(std::vector<int> &vec, std::deque<int> &deq);
		int midPoint(int start, int end);
		
};

#endif
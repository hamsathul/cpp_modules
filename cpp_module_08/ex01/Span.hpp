/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:27:43 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 13:27:43 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int N;
		std::vector<int> numbers;
	
	public:
		Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		Span(unsigned int N);
		void addNumber(int number);
		int shortestSpan() const;
		int longestSpan() const;

		// std::vector<int> getNumbers() const;
		template <typename InputIt>
		void addRange(InputIt first, InputIt last)
		{
			std::copy(first, last, std::back_inserter(numbers));
		}
};
#endif
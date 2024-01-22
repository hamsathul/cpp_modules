/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:00:57 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/21 13:00:57 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# define CYAN "\e[36m"
# define MAGENTA "\e[35m"
# define BLUE "\e[34m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define RED "\e[31m"
# define RESET "\e[0m"

template <typename T>

void swap(T &first, T &second)
{
	T temp = first;
	first = second;
	second = temp;
}

template <typename T>
T min(T first, T second)
{
	return first < second ? first : second;
}

template <typename T>
T max (T first, T second)
{
	return first > second ? first : second;
}

#endif
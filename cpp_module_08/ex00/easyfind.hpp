/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:54:38 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/22 12:54:38 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator valuePos = std::find(container.begin(), container.end(), value);
	if(valuePos == container.end())
		throw std::runtime_error("value not found");
	return valuePos;
}

#endif
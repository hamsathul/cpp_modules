/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:36:18 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/16 22:36:18 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy){ (void)copy;}
ScalarConverter::~ScalarConverter(){}

ScalarConverter &ScalarConverter::operator=(ScalarConverter overload)
{
	(void)overload;
	return(*this);
}

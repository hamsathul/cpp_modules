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
ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }
ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter overload)
{
	(void)overload;
	return (*this);
}

void validate_literals(std::string &str)
{
	if (str.length() == 1 || str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		return;

	if (str.find_first_not_of(' ') == str.npos)
	{
		std::cout << RED << "Error\nThe argument cannot contain only spaces" << RESET << std::endl;
		exit(1);
	}

	if (str.find_first_not_of("+-.fF0123456789") != str.npos)
	{
		std::cout << RED << "Error\nThe argument value contains invalid characters." << RESET << std::endl;
		exit(1);
	}

	int sign_count = 0;
	int dot_count = 0;
	int f_count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-')
			sign_count++;

		if (str[i] == '.')
			dot_count++;

		if (str[i] == 'f' || str[i] == 'F')
			f_count++;

		if (sign_count > 1 || dot_count > 1 || f_count > 1)
		{
			std::cout << RED << "Error\nThe argument can only contain 1 of each special charcter (+-.fF)" << RESET << std::endl;
			exit(1);
		}
	}

	if ((str.find('+') != str.npos && str[0] != '+') || (str.find('-') != str.npos && str[0] != '-'))
	{
		std::cout << RED << "Error\nThe sign of the argument must be at the begining." << RESET << std::endl;
		exit(1);
	}

	if ((str.find('f') != str.npos && str[str.length() - 1] != 'f') || (str.find('F') != str.npos && str[str.length() - 1] != 'F'))
	{
		std::cout << RED << "Error\nIf the argument is float the f or F character must be at the end." << RESET << std::endl;
		exit(1);
	}

	if (str[0] == '0' || ((str[0] == '+' || str[0] == '-') && str[1] == '0'))
	{
		std::cout << RED << "Error\nThe argument value cannt start with 0." << RESET << std::endl;
		exit(1);
	}
}

void print_char(std::string &str)
{
	if (str.length() == 1)
	{
		char charValue = static_cast<char>(str[0]);

		if (std::isdigit(charValue) || !std::isprint(charValue))
			std::cout << YELLOW << "char: Non Displayable" << RESET << std::endl;
		else
			std::cout << GREEN << "char: '" << charValue << "'" << RESET << std::endl;
	}
	else
	{
		long long longValue = atoll(str.c_str());
		char charValue = static_cast<char>(longValue);

		if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
			std::cout << YELLOW << "char: Impossible" << RESET << std::endl;
		else if (longValue < 0 || longValue > 255)
			std::cout << YELLOW << "char: Impossible" << RESET << std::endl;
		else if (!std::isprint(longValue))
			std::cout << YELLOW << "char: Non displayable" << RESET << std::endl;
		else
			std::cout << GREEN << "char: '" << charValue << "'" << RESET << std::endl; 
	}
}

void print_int(std::string &str)
{
	long long longValue = atoll(str.c_str());
	int intValue = static_cast<int>(longValue);

	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "-+inf" || str == "nan")
		std::cout << YELLOW << "int: Impossible" << RESET << std::endl;
	else if (longValue < INT_MIN || longValue > INT_MAX || (str.length() == 1 && !std::isdigit(str[0])))
		std::cout << YELLOW << "int: Impossible" << RESET << std::endl;
	else
		std::cout << GREEN "int: " << intValue << RESET << std::endl;

}

void print_float(std::string &str)
{
	double doubleValue = atof(str.c_str());
	float floatValue = static_cast<float>(doubleValue);

	if (str == "-inff" || str == "-inf")
		std::cout << GREEN << "float: " << "-inff" << RESET << std::endl;
	else if (str == "+inff" || str == "+inf")
		std::cout << GREEN << "float: " << "+inff" << std::endl;
	else if (str == "nanf" || str == "nan")
		std::cout << GREEN << "float: " << "nanf" << RESET << std::endl;
	else if (doubleValue < -FLT_MAX || doubleValue > FLT_MAX || (str.length() == 1 && !std::isdigit(str[0])))
		std::cout << YELLOW << "float: Impossible" << RESET << std::endl;
	else if (str.find('.') == str.npos)
		std::cout << GREEN << "float: " << floatValue << ".0f" << RESET << std::endl;
	else 
	{
		int precescionLength = str.length() -(str.find('.') + 1);
		if (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F')
			precescionLength--;
		std::cout << GREEN << "float " << std::fixed << std::setprecision(precescionLength) << floatValue << "f" << RESET << std::endl;
	}
}

void print_double(std::string &str)
{
	double doubleValue = atof(str.c_str());

	if (str == "-inff" || str == "-inf")
		std::cout << GREEN << "double: " << "-inf" << RESET << std::endl;
	else if (str == "+inff" || str == "+inf")
		std::cout << GREEN << "double: " << "+inf" << RESET << std::endl;
	else if (str == "nanf" || str == "nan")
		std::cout << GREEN << "double: " << "nan" << RESET << std::endl;
	else if (doubleValue < -DBL_MAX || doubleValue > DBL_MAX || (str.length() == !std::isdigit(str[0])))
		std::cout << YELLOW << "double: Impossible" << RESET << std::endl; 
	else if (str.find('.') == str.npos)
		std::cout << GREEN << "double: " << doubleValue << ".0" << RESET << std::endl;
	else
	{
		int precescionLength = str.length() - (str.find('.') + 1);

		if (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F')
			precescionLength--;
		
		std::cout << GREEN << "double: " << std::fixed << std::setprecision(precescionLength) << doubleValue << RESET << std::endl;
	}
}

void ScalarConverter::convert(std::string &str){
	validate_literals(str);
	print_char(str);
	print_int(str);
	print_float(str);
	print_double(str);

}
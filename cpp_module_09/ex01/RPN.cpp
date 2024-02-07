/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:08:58 by hkunnam-          #+#    #+#             */
/*   Updated: 2024/01/23 10:08:58 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &other):operandStack(other.operandStack){}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->operandStack = other.operandStack;
	}
	return (*this);
}

RPN::~RPN(){}

int RPN::performOperation(int operand1, int operand2, const std::string &op)
{	
	
	if (op == "+")
		return operand1 + operand2;
	else if (op == "-")
		return operand1 - operand2;
	else if (op == "*")
		return operand1 * operand2;
	else if (op == "/")
		return operand1/operand2;		
	
	return 0;
}

int RPN::evaluateExpression(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if(operandStack.size() < 2)
			{
				std::cerr << RED << "Error: insufficient operands for operator." << RESET << std::endl;
				return(1);
			}

			int operand2 = operandStack.top();
			operandStack.pop();
			int operand1 = operandStack.top();
			operandStack.pop();
			// if (operand1 >= 10 || operand2 >= 10)
			// {
			// 	std::cerr << RED << "Error: the numbers must be less than 10" << RESET << std::endl;
			// 	return(1);
			// }
			if ( operand1 <= INT_MIN || operand2 <= INT_MIN)
			{
				std::cerr << RED << "Error: the number is invalid" << RESET << std::endl;
				return(1);
			}
			if (token == "/" && operand2 == 0)
			{
				std::cerr << RED << "Error: divison by zero" << RESET << std::endl;
				return (1);
			}
			int result = performOperation(operand1, operand2, token);
			if (result >= INT_MAX || result <= INT_MIN)
			{
				std::cerr << RED << "Error: result is greater than limits" << RESET << std::endl;
				return (1);	
			}

			operandStack.push(result);
		}
		else if (token.find_first_of("0123456789") != token.npos)
		{
			int operand;
			std::istringstream(token) >> operand;
			operandStack.push(operand);
		}
		else
		{
			std::cerr << RED << "Error: invalid token in argument." << RESET << std::endl;
			return(1);
		}
	}
	return 0;
}

int RPN::printResult(std::ostream &out)
{
	if (operandStack.empty())
	{
		std::cerr << RED << "Error: No result to print." << RESET << std::endl;
		return(1);
	}

	if (operandStack.size() > 2)
	{
		std::cerr << RED << "Error: more than one result in the stack." << RESET << std::endl;
		return 1;
	}

	out << GREEN << operandStack.top() << RESET << std::endl;
	return 0;
}
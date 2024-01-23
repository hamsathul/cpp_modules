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
	{
		if (operand1 != 0)
			return operand1/operand2;
		else
		{
			std::cerr << RED << "Error: division by zero." << RESET << std::endl;
			exit(1);
		}
	}
		return 0;
}

void RPN::evaluateExpression(const std::string &expression)
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
				exit(1);
			}

			int operand2 = operandStack.top();
			operandStack.pop();
			int operand1 = operandStack.top();
			operandStack.pop();
			int result = performOperation(operand1, operand2, token);

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
			exit(1);
		}
	}
}

void RPN::printResult(std::ostream &out)
{
	if (operandStack.empty())
	{
		std::cerr << RED << "Error: No result to print." << RESET << std::endl;
		exit(1);
	}

	if (operandStack.size() > 2)
	{
		std::cerr << RED << "Error: more than one result in the stack." << RESET << std::endl;
	}

	out << GREEN << operandStack.top() << RESET << std::endl;
}
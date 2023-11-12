/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:09:29 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/09 21:02:49 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

 int	Account::_nbAccounts = 0;
 int	Account::_totalAmount = 0;
 int	Account::_totalNbDeposits = 0;
 int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(0);
	std::tm *local_time = std::localtime(&now);

	char timestamp[18];
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", local_time);
	std::cout << "[" << timestamp << "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;

}
void Account::makeDeposit(int deposit)
{
	int p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	
}
bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = _amount;
	_amount = _amount - withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	if (_amount >= 0)
	{
		_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		_amount = p_amount;
		return (0);
	}
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

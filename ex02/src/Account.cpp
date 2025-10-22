/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:37:31 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/22 12:21:53 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

void Account::_displayTimestamp(void) {
    std::time_t now = std::time(0);
    std::tm* tmPtr = std::localtime(&now);

    char buffer[16];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tmPtr);

    std::cout << "[" << buffer << "] ";
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount(void) {
	return _totalAmount;
}

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
	
void Account::makeDeposit(int deposit) {
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();

	if (withdrawal > _amount) {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawl:refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";witdrawl:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

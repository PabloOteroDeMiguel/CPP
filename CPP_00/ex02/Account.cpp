/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:59:49 by potero            #+#    #+#             */
/*   Updated: 2022/10/21 14:17:29 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) : _accountIndex(Account::_nbAccounts),
		_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	Account::_nbAccounts++;
	Account::_totalAmount += Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";created" << std::endl;
}

Account::~Account (void) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";closed" << std::endl;
	return;
}

void	Account::makeDeposit( int deposit ) {

	std::cout << "DEPOSIT" << std::endl;
	if (deposit)
		;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	std::cout << "WITHDRAWAL" << std::endl;
 	if (withdrawal)
		return (true);
	return (false);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index: " <<  this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawls:" << Account::getNbWithdrawals() << std::endl;

}
void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ) {

	time_t now = time(0);

	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout <<  1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_" << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec << "] ";
}

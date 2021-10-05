#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp(void){

	
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << Account::getNbAccounts() << std::endl;
	std::cout << Account::getTotalAmount() << std::endl;
	std::cout << Account::getNbDeposits() << std::endl;
	std::cout << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << this->_accountIndex << std::endl;
	std::cout << this->_amount << std::endl;
	std::cout << this->_nbDeposits << std::endl;
	std::cout << this->_nbWithdrawals << std::endl;
}

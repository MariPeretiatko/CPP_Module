
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account :: _totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    this->_accountIndex = Account::_nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
}

 int	Account::getNbAccounts(){
    return Account::_nbAccounts;
}

int     Account::getTotalAmount(){
    return Account::_totalAmount;
}

int     Account::getNbDeposits(){
    return Account::_totalNbDeposits;
}

int     Account::getNbWithdrawals(){
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "Accounts : " <<getNbAccounts() <<std::endl;
    std::cout << "Total Amount : " <<getTotalAmount() <<std::endl;
    std::cout << "Nb Deposits : " <<getNbDeposits() <<std::endl;
    std::cout << "Nb Withdrawals : " <<getNbWithdrawals() <<std::endl <<std::endl;
}

int Account::checkAmount() const {
    return this->_amount;
}

void Account::displayStatus() const {
    Account::_displayTimestamp();
    std::cout << "Account Index : " << this->_accountIndex << std::endl;
    std::cout << "Amount : " << this->_amount << std::endl;
    std::cout << "Nb Deposits : " << this->_nbDeposits << std::endl;
    std::cout << "Nb Withdrawals : " << this->_nbWithdrawals << std::endl << std::endl;
}

void Account::_displayTimestamp() {
    time_t raw_time;
    struct tm *time_info;
    char buffer[80];

    time(&raw_time);
    time_info = localtime(&raw_time);

    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", time_info);

    std::cout << "Current date and time : " << buffer << std::endl;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_totalAmount++;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    
}

bool Account::makeWithdrawal(int withdrawal){
    Account::getTotalAmount();
    std::cout << "Current account amount : " << this->_amount << std::endl;
    std::cout << "Trying to withdraw funds : " << withdrawal << std::endl;

    if(this->_amount - withdrawal < 0)
    {
        std::cout<<"Insufficient funds \n\n";
        return false;
    }
    else
    {
        this->_amount -= withdrawal;
        Account::_totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout<<"Success\n\n";
        return true;
    }
}

Account::~Account() {}
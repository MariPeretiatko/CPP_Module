/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:52:21 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/11 19:52:22 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->count = 0;
}
PhoneBook::~PhoneBook() {}

int PhoneBook::getCount() {
    return this->count;
}

void PhoneBook::setCount(int count) {
    this->count = count;
}
void PhoneBook::addContact(Contact contact) {
    if(this->count == 8)
        this->count = 0;
    this->contacts[count] = contact;
    this->count++;
}
bool PhoneBook::searchContact(int id) {
    if (id > 8 || id < 0)
        return false;
    showContact(id);
    return true;
}

void PhoneBook::printCorectString(std::string pString)
{
    if(pString.length() >= 10)
        std::cout << std::setw(10) << pString.substr(0, 9) + "." << "|";
    else
        std::cout << std::setw(10) << pString.substr(0, 10) << "|";
}

void PhoneBook::showContact(int id) {
    std::cout << "     Index|First Name| Last Name|  Nickname|Phone Numb|\n";
    std::cout << "_______________________________________________________\n";
    std::cout << std::setw(10) << std::right << id  + 1<< "|";

    printCorectString(this->contacts[id].getFirstName());
    printCorectString(this->contacts[id].getLastName());
    printCorectString(this->contacts[id].getNickname());
    printCorectString(this->contacts[id].getPhoneNumber());
    std::cout << std::endl;
    sleep(5);
}

void PhoneBook::printAll() {
    std::cout << "     Index|First Name| Last Name|  Nickname|Phone Numb|\n";
    std::cout << "_______________________________________________________\n";
    for (int id = 0; id < 8; id++) {
        std::cout << std::setw(10) << std::right << id  + 1<< "|";
        std::cout << std::setw(10) << this->contacts[id].getFirstName().substr(0, 10) << "|";
        std::cout << std::setw(10) << this->contacts[id].getLastName().substr(0, 10) << "|";
        std::cout << std::setw(10) << this->contacts[id].getNickname().substr(0, 10) << "|";
        std::cout << std::setw(10) << this->contacts[id].getPhoneNumber().substr(0, 10) << "|";
        std::cout << std::endl;
    }
}

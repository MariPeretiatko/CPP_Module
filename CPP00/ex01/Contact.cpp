/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:51:37 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/11 19:52:06 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(std::string first_name) {
    this->first_name = first_name;
}

void Contact::setLastName(std::string last_name) {
    this->last_name = last_name;
}
void Contact::setPhoneNumber(std::string phone_number) {
    this->phone_number = phone_number;
}

void Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
}

void Contact::setDarkestSecret(std::string darkest_secret) {
    this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() {
    return std::string(this->first_name);
}

std::string Contact::getLastName() {
    return std::string(this->last_name);
}

std::string Contact::getNickname() {
    return std::string(this->nickname);
}

std::string Contact::getPhoneNumber() {
    return std::string(this->phone_number);
}

void Contact::addInfo(std::string first_name, std::string last_name, std::string nickname, std::string phone_number,
                      std::string darkest_secret) {
    setFirstName(first_name);
    setLastName(last_name);
    setNickname(nickname);
    setPhoneNumber(phone_number);
    setDarkestSecret(darkest_secret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:51:59 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/11 20:24:29 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void printErrorMes(std::string const &message)
{
    std::cout << RED << "Error ◉ " << RESET << message << std::endl;
    sleep(1);
}

bool is_digits(const std::string &str)
{
    int i = -1;
    size_t count = 0;
    while (str[++i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            count++;
    }
    if (count == str.length())
        return true;
    return false;
}

int cleanConsole()
{
    int unused_result = std::system("cls");
    std::cout << "\033[2J\033[1;1H";
    return unused_result;
}

void checkErrorInput(std::string const &input)
{
    if (input != "EXIT" && input != "ADD" && input != "SEARCH" && input != "ALL")
    {
        printErrorMes("Write only EXIT ADD SEARCH.");
        cleanConsole();
    }
}

bool checkEmptyPhoneBook(PhoneBook &phoneBook)
{
    if (phoneBook.getCount() == 0)
    {
        printErrorMes("Empty PhoneBook - ADD contact");
        return false;
    }
    return true;
}

void addInput(std::string const &title, std::string &input)
{
    while (true)
    {
        std::cout << title;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input.empty())
            printErrorMes("Empty input");
        else
            break;
    }
}

void addPhoneNumber(std::string &phone_number)
{
    while (true)
    {
        addInput("Phone number : ", phone_number);
        if (is_digits(phone_number) && (phone_number.length() >= 6 && phone_number.length() <= 13))
            break;
        else
            printErrorMes("Input only numbers (6 - 13)");
    }
}

void addNewContact(Contact &contact)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    addInput("First name : ", first_name);
    addInput("Last name : ", last_name);
    addInput("Nickname : ", nickname);
    addPhoneNumber(phone_number);
    addInput("Darkest : ", darkest_secret);

    contact.addInfo(first_name, last_name, nickname, phone_number, darkest_secret);
}

void searchContact(PhoneBook &phoneBook, std::string &input)
{
    while (checkEmptyPhoneBook(phoneBook))
    {
        addInput("Write id contact :", input);
        if (is_digits(input))
        {
            int number_contact = std::atoi(input.c_str());
            if (number_contact >= 1 && number_contact <= 8 && phoneBook.getCount() >= number_contact)
            {
                phoneBook.searchContact(number_contact - 1);
                //                cleanConsole();
                break;
            }
            else
                printErrorMes("No contacts were found with this index (1 - 8)");
        }
        else
            printErrorMes("Input only numbers");
    }
}

int main()
{

    PhoneBook phoneBook;
    std::string input;

    cleanConsole();
    while (input != "EXIT")
    {
        //        cleanConsole();
        addInput("Write command (ADD , SEARCH, EXIT): ", input);
        checkErrorInput(input);
        //        cleanConsole();
        if (input == "ADD")
        {
            Contact new_tmp;
            addNewContact(new_tmp);
            phoneBook.addContact(new_tmp);
            cleanConsole();
        }
        if (input == "SEARCH")
        {
            searchContact(phoneBook, input);
            cleanConsole();
        }
        if (input == "ALL")
        {
            phoneBook.printAll();
            sleep(2);
            cleanConsole();
        }
    }
    return 0;
}

#ifndef CPP_CONTACT_H
#define CPP_CONTACT_H

#include <iomanip>
#include <iostream>
#include <string.h>
#include <stdlib.h>

class Contact
{
private:
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    ~Contact();
    void setId(int id);
    void setFirstName(std::string first_name);
    void setLastName(std::string last_name);
    void setNickname(std::string nickname);
    void setPhoneNumber(std::string phone_number);
    void setDarkestSecret(std::string darkest_secret);

    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    void addInfo(std::string first_name, std::string last_name,
                 std::string nickname, std::string phone_number,
                 std::string darkest_secret);
};

#endif // CPP_CONTACT_H

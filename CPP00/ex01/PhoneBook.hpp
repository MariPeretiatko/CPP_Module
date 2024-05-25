#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H

# include <iomanip>
# include <iostream>
# include <string.h>
# include<unistd.h>

#include "Contact.hpp"

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define WHITE "\033[1;37m"
# define BYELLOW "[\033[1;33m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"

 class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
    public:
        PhoneBook();
        ~PhoneBook();
        void addContact(Contact contact);
        bool searchContact(int id);
        void showContact(int id);
        int getCount();
        void setCount(int count);
        void printCorectString(std::string pString);
        void printAll();


};


#endif //CPP_PHONEBOOK_H

//
// Created by mperetia on 24.06.24.
//

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>

#include "Colors.h"

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void promote();
    void demote();

};

std::ostream  &operator<<(std::ostream &out, const Bureaucrat &obj);


#endif //BUREAUCRAT_H

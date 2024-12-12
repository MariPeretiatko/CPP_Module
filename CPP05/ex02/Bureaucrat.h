//
// Created by mperetia on 24.06.24.
//

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.h"

#include "Colors.h"
class AForm;


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
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat& operator=(const Bureaucrat& obj);
    ~Bureaucrat();

    const std::string getName() const;
    int getGrade() const;

    void promote();
    void demote();
    void signForm(AForm &obj);

    void executeForm(AForm &form);

};

std::ostream  &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif //BUREAUCRAT_H

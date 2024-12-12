//
// Created by mperetia on 25.06.24.
//

#ifndef CPP05_FORM_H
#define CPP05_FORM_H

#include <iostream>
#include <string>

#include "Bureaucrat.h"
#include "Colors.h"
class Bureaucrat;

class Form {
private:
    const std::string name;
    bool isSigned;
    const int gradeSign;
    const int gradeExecute;
public:
    class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class AlreadySingException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    Form();
    Form(std::string init_name, int init_gradeSign, int init_gradeExecute);
    Form(const Form &obj);
    Form& operator=(const Form& obj);
    ~Form();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;

    bool beSigned(Bureaucrat &bureaucrat);

};

std::ostream  &operator<<(std::ostream &out, const Form &obj);


#endif //CPP05_FORM_H

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

class AForm {
private:
    const std::string name;
    bool isSigned;
    const int gradeSign;
    const int gradeExecute;
    virtual bool perform() const = 0;
public:
    class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class IsNotSignedException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    AForm();
    AForm(std::string init_name, int init_gradeSign, int init_gradeExecute);
    AForm(const AForm &obj);
    AForm& operator=(const AForm& obj);
//    ~AForm();
    virtual ~AForm();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;

    void beSigned(Bureaucrat &bureaucrat);
    void execute(Bureaucrat const &executor) const;

};

std::ostream  &operator<<(std::ostream &out, const AForm &obj);


#endif //CPP05_FORM_H

//
// Created by mperetia on 25.06.24.
//

#include "Form.h"
Form::Form() : name("unknown_form"), isSigned(false), gradeSign(150), gradeExecute(150){
    std::cout << GREEN "Form " RESET CYAN << name << RESET GREEN "Default Constructor Called" RESET << std::endl;
}

Form::Form(std::string init_name, int init_gradeSign, int init_gradeExecute)
: name(init_name), isSigned(false), gradeSign(init_gradeSign), gradeExecute(init_gradeExecute){
    if(init_gradeSign < 1 || init_gradeExecute < 1)
        throw GradeTooHighException();
    if(init_gradeSign > 150 || init_gradeExecute > 150)
        throw GradeTooLowException();
    std::cout << GREEN "Form " RESET CYAN << name <<RESET GREEN " Constructor Called" RESET << std::endl;
}

Form::Form(const Form &obj)
: name(obj.name), isSigned(obj.isSigned), gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute){
    std::cout << YELLOW "Bureaucrat Copy constructor called" RESET << std::endl;
}

Form &Form::operator=(const Form &obj) {
    if(this != &obj)
        this->isSigned = obj.isSigned;
    return *this;
}

Form::~Form(){
    std::cout << RED "Destructor called " RESET << CYAN << name << RESET << std::endl;
}

const std::string &Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getGradeSign() const {
    return gradeSign;
}

int Form::getGradeExecute() const {
    return gradeExecute;
}

bool Form::beSigned(Bureaucrat &bureaucrat) {
    if(isSigned){
        std::cout<< "Form has already been signed" <<std::endl;
        return false;
    }
    if(bureaucrat.getGrade() > gradeSign)
        throw GradeTooHighException();
    isSigned = true;
    std::cout<< "Form successfully signed" <<std::endl;

    return true;
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Form Grade Too Low";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Form Grade Too High";
}

std::ostream &operator<<(std::ostream &out, const Form &obj) {
    out << "Form: " << obj.getName()
        << ", signed: " << std::boolalpha << obj.getIsSigned()
        << ", Grade to Sign: " << obj.getGradeSign()
        << ", Grade to Execute: " << obj.getGradeExecute();
    return out;
}


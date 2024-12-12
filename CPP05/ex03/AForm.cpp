//
// Created by mperetia on 25.06.24.
//

#include "AForm.h"
AForm::AForm() : name("unknown_form"), isSigned(false), gradeSign(150), gradeExecute(150){
    std::cout << GREEN "AForm " RESET CYAN << name << RESET GREEN "Default Constructor Called" RESET << std::endl;
}

AForm::AForm(std::string init_name, int init_gradeSign, int init_gradeExecute)
: name(init_name), isSigned(false), gradeSign(init_gradeSign), gradeExecute(init_gradeExecute){
    if(init_gradeSign < 1 || init_gradeExecute < 1)
        throw GradeTooLowException();
    if(init_gradeSign > 150 || init_gradeExecute > 150)
        throw GradeTooHighException();
    std::cout << GREEN "AForm " RESET CYAN << name <<RESET GREEN " Constructor Called" RESET << std::endl;
}

AForm::AForm(const AForm &obj)
: name(obj.name), isSigned(obj.isSigned), gradeSign(obj.gradeSign), gradeExecute(obj.gradeExecute){
    std::cout << YELLOW "AForm Copy constructor called" RESET << std::endl;
}

AForm &AForm::operator=(const AForm &obj) {
    if(this != &obj)
        this->isSigned = obj.isSigned;
    return *this;
}

AForm::~AForm(){
    std::cout << RED "AForm Destructor called " RESET << CYAN << name << RESET << std::endl;
}

const std::string &AForm::getName() const {
    return name;
}

bool AForm::getIsSigned() const {
    return isSigned;
}

int AForm::getGradeSign() const {
    return gradeSign;
}

int AForm::getGradeExecute() const {
    return gradeExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
    if(isSigned){
        std::cout<< "Form" << name << "has already been signed" <<std::endl;
        return ;
    }
    if(bureaucrat.getGrade() > gradeSign)
        throw GradeTooHighException();
    isSigned = true;
}

void AForm::execute(Bureaucrat const &bureaucrat) const{
  if(!isSigned)
    throw IsNotSignedException();
  if(bureaucrat.getGrade() > gradeExecute)
    throw GradeTooLowException();
  if(perform())
      std::cout << bureaucrat.getName() << " executed " << name << std::endl;
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Form Grade Too Low";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Form Grade Too High";
}

const char *AForm::IsNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &obj) {
    out << "Form: " << obj.getName()
        << ", signed: " << std::boolalpha << obj.getIsSigned()
        << ", Grade to Sign: " << obj.getGradeSign()
        << ", Grade to Execute: " << obj.getGradeExecute();
    return out;
}


//
// Created by mperetia on 24.06.24.
//

#include "Bureaucrat.h"
Bureaucrat::Bureaucrat() : name("unknown"), grade(150){
    std::cout << GREEN "Bureaucrat Default Constructor Called" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string init_name, int init_grade) : name(init_name), grade(init_grade) {
    if(init_grade < 1)
        throw GradeTooHighException();
    if(init_grade > 150)
        throw GradeTooLowException();
    std::cout <<GREEN "Bureaucrat " RESET<< CYAN << name << RESET << GREEN" created with grade " RESET << grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade){
    std::cout << YELLOW "Copy constructor called" RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if(this != &obj){
      this->grade = obj.grade;
      std::cout << YELLOW "Assignment operator called" RESET << std::endl;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << RED "Destructor called " RESET << CYAN << name << RESET << std::endl;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}
//++
void Bureaucrat::demote() {
    if(this->grade >= 150)
        throw GradeTooLowException();
    this->grade++;
}
//--
void Bureaucrat::promote() {
    if(this->grade <= 1)
        throw GradeTooHighException();
    this->grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream  &operator<<(std::ostream &out, const Bureaucrat &obj){
    return out << CYAN << obj.getName() << RESET << " with grade " << CYAN <<obj.getGrade() << RESET;
}
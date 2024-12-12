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
    std::cout << YELLOW "Bureaucrat Copy constructor called" RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if(this != &obj){
        this->grade = obj.grade;
        std::cout << YELLOW "Bureaucrat Assignment operator called" RESET << std::endl;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << RED "Bureaucrat Destructor called " RESET << CYAN << name << RESET << std::endl;
}

const std::string Bureaucrat::getName() const {
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

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch (const AForm::GradeTooHighException& e) {
        std::cerr << this->name << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred while signing form "
                  << form.getName() << ": " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm &form) {
  try{
      form.execute(*this);
  }
  catch (const AForm::IsNotSignedException & e) {
      std::cerr << this->name << " couldn't execute " << e.what() << std::endl;
  }
  catch (const AForm::GradeTooLowException & e) {
      std::cerr << this->name << " couldn't execute " << e.what() << std::endl;
  }
  catch (const std::exception& e) {
      std::cerr << "An unexpected error occurred while executing form " << std::endl;
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat Grade too low!";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj){
    return out << CYAN << obj.getName() << RESET << " with grade " << CYAN <<obj.getGrade() << RESET;
}
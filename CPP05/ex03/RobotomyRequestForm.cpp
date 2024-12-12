//
// Created by mperetia on 27.06.24.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), _target("unknown_target"){
    std::cout << GREEN "RobotomyRequestForm " RESET CYAN << _target
          << RESET GREEN "Default Constructor Called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << GREEN "RobotomyRequestForm " RESET CYAN << _target
            << RESET GREEN " Constructor Called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
    : AForm(obj), _target(obj._target){
    std::cout << YELLOW "RobotomyRequestForm Copy constructor called" RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& obj){
  if (this != &obj)
    _target = obj._target;
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << RED "Destructor called RobotomyRequestForm " RESET << CYAN
            << _target << RESET << std::endl;
}

bool RobotomyRequestForm::perform() const{
  int luck = rand() % 2;
  if(luck == 1)
    std::cout << GREEN "Beeep " << _target << " has been robotomized succesfully" << RESET << std::endl;
  else
    std::cout << RED << _target << " could not be robotomized" << RESET << std::endl;
  return luck;
}
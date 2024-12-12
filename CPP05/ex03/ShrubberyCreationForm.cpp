//
// Created by mperetia on 27.06.24.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("unknown_target"){
    std::cout << GREEN "ShrubberyCreationForm " RESET CYAN << _target
            << RESET GREEN "Default Constructor Called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137),  _target(target){
    std::cout << GREEN "ShrubberyCreationForm " RESET CYAN << _target <<RESET GREEN " Constructor Called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
    : AForm(obj), _target(obj._target){
    std::cout << YELLOW "ShrubberyCreationForm Copy constructor called" RESET << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){
  if (this != &obj)
    _target = obj._target;

  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << RED "Destructor called ShrubberyCreationForm " RESET << CYAN << _target << RESET << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget() const {
  return _target;
}

bool ShrubberyCreationForm::perform() const{
  std:: string filename = _target + "_shrubbery";
  std::ofstream file(filename.c_str());
  if (file.is_open()){
    file << "       🌳\n";
	file << "      /   \\\n";
	file << "    🌲     🌴\n";
	file << "   / \\    / \\\n";
	file << " 🌱  🌿  🌵  🍀\n";
  }
  else
    throw OpenFileException();
  file.close();
  std::cout << "File " << filename << " has been created" << std::endl;
  return true;
}

const char *ShrubberyCreationForm::OpenFileException::what() const throw() {
  return "Problem with opening file";
}
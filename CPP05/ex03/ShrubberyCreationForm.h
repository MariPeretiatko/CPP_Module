//
// Created by mperetia on 27.06.24.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "AForm.h"
#include <fstream>


class ShrubberyCreationForm : public AForm {
private:
      std::string _target;
public:
      class OpenFileException : public std::exception{
      public:
           virtual const char* what() const throw();
      };
      ShrubberyCreationForm();
      ShrubberyCreationForm(std::string target);
      ShrubberyCreationForm(const ShrubberyCreationForm& obj);
      ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
      ~ShrubberyCreationForm();
//      virtual ~ShrubberyCreationForm();

      const std::string &getTarget() const;
      bool perform() const;

};


#endif //CPP05_SHRUBBERYCREATIONFORM_H

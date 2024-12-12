//
// Created by mperetia on 27.06.24.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "AForm.h"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm{
private:
    std::string _target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();

    std::string getTarget() const;
    bool perform() const;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H

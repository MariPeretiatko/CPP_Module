//
// Created by mperetia on 27.06.24.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "AForm.h"

class PresidentialPardonForm : public AForm {
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& obj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();

    std::string getTarget() const;
    bool perform() const;
};

#endif

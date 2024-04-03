//
// Created by Luke Montgomery on 03/04/2024.
//

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>

class PresidentialPardonForm {
    private:
        std::string name;
        bool IsSigned;
        size_t _gradeForSigning;
        size_t _gradeForExecuting;
        std::string target;
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void    exec();
};


#endif //CPP_PRESIDENTIALPARDONFORM_H

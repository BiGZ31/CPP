#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "FormA.hpp"
class Form;

class Bureaucrat {
    private:
        std::string name;
        size_t grade;
    public:
        Bureaucrat(std::string name, size_t grade);
        ~Bureaucrat();
//        Bureaucrat(Bureaucrat &copy);
//        Bureaucrat &operator=(Bureaucrat const &copy);
        std::string GetName() const;
        size_t GetGrade() const;
        void    printName();
        void    printGrade();
        void    executeForm(Form const & form);


        class GradeTooHighException: public std::exception
        {
                public:
                    virtual const char* what() const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};


#endif

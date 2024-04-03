#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
    private:
        std::string name;
        size_t grade;
//        void GradeTooHighException();
//        void GradeTooLowException();
    public:
        Bureaucrat(std::string name, size_t grade);
        ~Bureaucrat();
//        Bureaucrat(Bureaucrat &copy);
//        Bureaucrat &operator=(Bureaucrat const &copy);
        std::string GetName();
        size_t GetGrade();
        void    printName();
        void    printGrade();


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

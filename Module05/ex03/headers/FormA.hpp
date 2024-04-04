#ifndef FORMA_H
#define FORMA_H

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
protected:
    std::string name;
    bool IsSigned;
    size_t _gradeForSigning;
    size_t _gradeForExecuting;

public:
    Form(std::string name, size_t gradeToSigne, size_t gradeToExecute);
    virtual ~Form();
    int signForm(Bureaucrat someone);
    void beSigned(Bureaucrat someone);
    virtual void execute(Bureaucrat const &executor) const;

    std::string getName();
    size_t getGradeSigning();
    size_t getGradeExecuting();

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};
#endif

#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("name", 145, 137){
    this->name = "ShrubberyCreationForm";
    this->_gradeForExecuting = 137;
    this->_gradeForSigning = 145;
    this->target = target + "_Shrubbery";
    this->IsSigned = 1;
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &someone) const{
    try {
        if (this->IsSigned != 1) {
            std::cout << "\033[1;31m[!] " << someone.GetName()
                      << " couldn't execute the form because its not signed.\033[0m"
                      << std::endl;
            return;
        }
        if (someone.GetGrade() > this->_gradeForSigning)
            throw (Form::GradeTooLowException());
        else {
            std::ofstream MyFile(this->target);
            MyFile
                    << "my-app/\n├─ node_modules/\n├─ public/\n│  ├─ favicon.ico\n│  ├─ index.html\n│  ├─ robots.txt\n├─ src/\n│  ├─ index.css\n│  ├─ index.js\n├─ .gitignore\n├─ package.json\n├─ README.md";
            MyFile.close();
            std::cout << "Shrubbery file created." << std::endl;
        }
    }
    catch (const std::exception &e) {
        std::cout << "\033[1;31m[!] " << someone.GetName()
                  << " couldn't execute the form because his grade is too low.\033[0m" << std::endl;
    }
}

void ShrubberyCreationForm::signForm(Bureaucrat someone) {
    try {
        if (this->IsSigned == 1) {
            std::cout << "\033[1;31m[!] " << someone.GetName()
                      << " couldn't sign the form because its already signed.\033[0m" << std::endl;
            return;
        }
        if (someone.GetGrade() > this->_gradeForSigning)
            throw (Form::GradeTooLowException());
        else if (someone.GetGrade() < this->_gradeForSigning) {
            this->IsSigned = 1;
            std::cout << someone.GetName() << " signed the form " << this->name << "." << std::endl;
        }
    }
    catch (const std::exception &e) {
        std::cout << "\033[1;31m[!] " << someone.GetName()
                  << " couldn't sign the form because his grade is too low.\033[0m" << std::endl;
    }
}
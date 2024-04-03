#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target){
    this->name = "ShrubberyCreationForm";
    this->_gradeForExecuting = 137;
    this->_gradeForSigning = 145;
    this->target = target + "_Shrubbery";
    std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

void ShrubberyCreationForm::exec() {
    std::ofstream MyFile(this->target);
    MyFile << "my-app/\n├─ node_modules/\n├─ public/\n│  ├─ favicon.ico\n│  ├─ index.html\n│  ├─ robots.txt\n├─ src/\n│  ├─ index.css\n│  ├─ index.js\n├─ .gitignore\n├─ package.json\n├─ README.md";
    MyFile.close();
}
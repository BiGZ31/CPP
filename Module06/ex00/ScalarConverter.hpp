//
// Created by Luke Montgomery on 04/04/2024.
//

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter &copy);
        ScalarConverter &operator=(ScalarConverter const copy);
        static void convert(const std::string& literal);
};

#endif //CPP_SCALARCONVERTER_HPP

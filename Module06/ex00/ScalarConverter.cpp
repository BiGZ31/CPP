//
// Created by Luke Montgomery on 04/04/2024.
//

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter default constructor created." << std::endl;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "ScalarConverter default destructor created." << std::endl;
}

//ScalarConverter::ScalarConverter(ScalarConverter &copy) {
//    this->type = copy.type;
//    std::cout << "Copy ScalarConverter constructor called." << std::endl;
//}

//ScalarConverter &operator=(ScalarConverter const &copy)
//{
//    if (this != copy)
//    this->type = copy;
//    return this;
//}

void ScalarConverter::convert(const std::string& literal) {
    // Check if the literal represents a char
    // Try converting to int
    try {
        int i = std::stoi(literal);
        std::cout << "Int: " << i << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid int literal." << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "Int literal out of range." << std::endl;
    }

    // Try converting to float
    try {
        float f = std::stof(literal);
        std::cout << "Float: " << f << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid float literal." << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "Float literal out of range." << std::endl;
    }

    // Try converting to double
    try {
        double d = std::stod(literal);
        std::cout << "Double: " << d << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid double literal." << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "Double literal out of range." << std::endl;
    }
    int asciiValue;
    try {
        asciiValue = std::stoi(literal);
    } catch (const std::invalid_argument&) {
        std::cout << "Invalid literal." << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "Char is out of range." << std::endl;
    }

    if (asciiValue >= 0 && asciiValue <= 127) {
        char c = static_cast<char>(asciiValue);
        if (isprint(c)) {
            std::cout << "Char: " << c << std::endl;
        }
        else
            std::cout << "Char is unprintable." << std::endl;
    }
    else
        std::cout << "Impossible." << std::endl;
}
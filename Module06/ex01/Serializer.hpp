#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <string>
#include <iostream>
#include "Data.hpp"

// Serializer class
class Serializer {
private:
    Serializer(); // Private constructor to prevent instantiation

public:
    // Serialize method
    static uintptr_t serialize(Data* ptr);

    // Deserialize method
    static Data* deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP

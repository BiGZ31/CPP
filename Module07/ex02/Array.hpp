#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array {
private:
    unsigned int arraySize;
    T* data;
public:
    Array();
    Array(unsigned int i);
    ~Array();
    Array(const Array& other);
    Array<T>& operator=(const Array<T>& other);
    unsigned int size() const;
    T& operator[](unsigned int index) {
        if (index >= arraySize) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
};

#endif

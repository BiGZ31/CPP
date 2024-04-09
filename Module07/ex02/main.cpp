#include "Array.hpp"

template<typename T>
Array<T>::Array() {
    this->data = nullptr;
    this->arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int i) {
    this->arraySize = i;
    this->data = new T[this->arraySize];
}

template<typename T>
Array<T>::~Array() {
    std::cout << "Default destructor called." << std::endl;
    delete[] data;
}

template<typename T>
Array<T>::Array(const Array<T>& copy) {
    this->arraySize = copy.arraySize;
    data = new T[arraySize];
    for (unsigned int i = 0; i < arraySize; ++i) {
        data[i] = copy.data[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] data;
        arraySize = other.arraySize;
        data = new T[arraySize];
        for (unsigned int i = 0; i < arraySize; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template<typename T>
unsigned int Array<T>::size() const {
    return this->arraySize;
}

int main(void) {
    try {
        // Test the Array class
        Array<int> arr(5);
        for (unsigned int i = 0; i < arr.size(); ++i) {
            arr[i] = i + 1;
        }

        // Display elements
        std::cout << "Array elements: ";
        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Testing out of bounds access
        std::cout << "Accessing element out of bounds: ";
        std::cout << arr[arr.size()] << std::endl; // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

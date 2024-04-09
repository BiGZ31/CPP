#include "iter.hpp"

template <typename T, typename Func>
void iter(T* array, size_t len, Func func)
{
    int i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

int main(void)
{
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Call iter with intArray and a function to print each element
    std::cout << "Printing intArray: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    // Call iter with charArray and a function to print each element
    std::cout << "Printing charArray: ";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;
}

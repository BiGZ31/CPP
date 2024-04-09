#include "Span.hpp"
#include <iostream>

int main() {
    Span span(10000);
    for (int i = 1; i <= 10000; ++i) {
        span.addNumber(i);
    }

    try {
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}

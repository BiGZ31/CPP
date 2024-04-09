//
// Created by Luke Montgomery on 05/04/2024.
//

#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : capacity(N) {}

void Span::addNumber(int number) {
    if (numbers.size() >= capacity) {
        throw std::runtime_error("Span is already full");
    }
    numbers.push_back(number);
}

int Span::shortestSpan() {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Cannot find shortest span with less than 2 numbers");
    }

    std::sort(numbers.begin(), numbers.end());
    int shortest_distance = numbers[1] - numbers[0];
    for (size_t i = 2; i < numbers.size(); ++i) {
        int distance = numbers[i] - numbers[i - 1];
        shortest_distance = std::min(shortest_distance, distance);
    }
    return shortest_distance;
}

int Span::longestSpan() {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Cannot find longest span with less than 2 numbers");
    }

    std::sort(numbers.begin(), numbers.end());
    return numbers.back() - numbers.front();
}

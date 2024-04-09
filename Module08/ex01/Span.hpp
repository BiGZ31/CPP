#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span {
private:
    unsigned int capacity;
    std::vector<int> numbers;

public:
    Span(unsigned int N);

    void addNumber(int number);

    int shortestSpan();

    int longestSpan();
};

#endif // SPAN_HPP

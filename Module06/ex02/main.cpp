#include "base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base* generate() {
    int choice = rand() % 3;
    switch(choice) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    try {
        identify(&p);
    } catch(...) {
        std::cout << "Unknown type" << std::endl;
    }
}

int main() {
    srand(time(nullptr)); // Initialize random seed

    Base* obj = generate();
    identify(obj);
    identify(*obj);

    delete obj;

    return 0;
}

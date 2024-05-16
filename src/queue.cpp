#include <iostream>
#include <Python.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int queue(int i) {
    std::cout << "you in input queue value :" << i << std::endl;
    return i + 1;
}

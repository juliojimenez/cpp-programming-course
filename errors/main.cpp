#include <iostream>

int main() {
    // Compile time error
    std::cout << "Hello World!" << std::endl

    // Runtime error
    int a = 7/0;
    return 0;
}
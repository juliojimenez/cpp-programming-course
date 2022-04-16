#include <iostream>
#include <string>

int main() {
    // Basic Examples of cout, cerr, and clog
    std::cout << "Hello C++ 20" << std::endl;

    int age1 {21};
    std::cout << "Age: " << age1 << std::endl;

    std::cerr << "An error has occured." << std::endl;
    std::clog << "This is a log message." << std::endl;

    // cin example
    int age2;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age2;

    std::cin >> name >> age2;

    std::cout << "Hello " << name << ", you are " << age2 << " years old!" << std::endl;

    // getline example for capturing data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type full name and age: " << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name << ", you are " << age3 << " years old!" << std::endl;

    return 0;
}
#include <iostream>
#include <cstring>

int main() {
    char buffer[10]; // A buffer that can hold 10 characters
    std::cout << "Enter your name: ";
    std::cin >> buffer; // Unsafe input, can overflow if input is more than 9 characters + null terminator

    std::cout << "Hello, " << buffer << "!" << std::endl;
    return 0;
}

#include <iostream>

void printhere() {
    char input[64];
    std::cout << "Hello, World! from second, enter string:" << std::endl;
    std::cin.getline(input, 64);
    std::cout << "Entered string is: " << input << std::endl;
}

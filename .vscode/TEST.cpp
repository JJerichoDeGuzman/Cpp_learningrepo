#include <iostream>

int main() {
    int myInteger; // default-initialized to an unspecified value
    float myFloat; // default-initialized to an unspecified value
    bool myBool; // default-initialized to false
    char myChar; // default-initialized to '\0'
    
    std::cout << "myInteger: " << myInteger << std::endl;
    std::cout << "myFloat: " << myFloat << std::endl;
    std::cout << "myBool: " << std::boolalpha << myBool << std::endl;
    std::cout << "myChar: " << myChar << std::endl;

    return 0;
}

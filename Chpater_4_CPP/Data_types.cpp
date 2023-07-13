#include <iostream>
#include <string>

int main() {
    int n = 1;
    
    std::string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if (n >= 1 && n <= 9) {
        std::cout << numbers[n - 1] << std::endl;
    } else {
        std::cout << "Greater than 9" << std::endl;
    }
    
    return 0;
}

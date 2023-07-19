#include <iostream>

void isEven(int inputCheck) {
    int checker { inputCheck % 2 };

    if (checker == 0) {
        std::cout << inputCheck << " is even.\n";
    } else {
        std::cout << inputCheck << " is odd.\n";
    }
}
int main() {
    std::cout << "Enter the integer:\n";
    int userIntegerInput {};
    std::cin >> userIntegerInput;

    isEven(userIntegerInput);
    return 0;
}

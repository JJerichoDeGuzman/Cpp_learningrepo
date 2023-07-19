##### Exercise 1: Odd or Even
**Problem** <hr>
>Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a function called `isEven()` that returns true if an integer passed to it is even, and false otherwise. Use the remainder operator to test whether the integer parameter is even. Make sure `isEven()` works with both positive and negative numbers.

**Solution** <hr>

```Cpp
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
```

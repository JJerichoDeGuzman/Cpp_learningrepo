##### Exercise 1 - Area Calculator
**Problem** <hr>

> Write a function that calculates the area of different shapes based on user input. Prompt the user to enter the type of shape (e.g., circle, rectangle, triangle) and the necessary measurements (e.g., radius, length, width, base, height). Implement separate functions for calculating the area of each shape. Use a switch statement or if-else statements to determine which shape's area calculation function to call based on the user's input.

**Solution** <hr>
```
#include <iostream>

void CircArea_Calc(double circ_radius) {    
    std::cout << 3.14159265 * (circ_radius * circ_radius) << std::endl; 
}

void RectArea_Calc (double BaseR, double HeightR) {
    std::cout << " The area of rectangle is " << BaseR * HeightR << std::endl; 
}

void TriaArea_Calc (double BaseT, double HeightT) {
     std::cout << " The area of triangle is " << (BaseT * HeightT) / 2 << std::endl;
}


int main () {
    std::cout << " Choose shape: Circle or Rectangle, Triangle: " << std::endl;
    std::string shape_choice {};
    std::cin >> shape_choice;

    if (shape_choice == "Circle") {
        std::cout << " What is the radius of your Circle " << std::endl;
        double radius_input {};
        std::cin >> radius_input;
        CircArea_Calc(radius_input);
    }

    else if (shape_choice == "Rectangle") {
        std::cout << " Enter the base and height, respectively " << std::endl;
        double base_inputRect {};
        double height_inputRect {};
        std::cin >> base_inputRect >> height_inputRect;
        RectArea_Calc(base_inputRect, height_inputRect);
    }

    else {
        std::cout << " Enter the base and height, respectively " << std::endl;
        double base_inputTria {};
        double height_inputTria {};
        std::cin >> base_inputTria >> height_inputTria;
        TriaArea_Calc(base_inputTria, height_inputTria);
    }

    return 0;
}

```

##### Exercise 2 - String Reversal
**Problem** <hr>
> Write a function that takes a string as input and reverses it. Implement the function to reverse the given string in-place (modify the original string) or return a new reversed string. Test the function with different strings to ensure it handles various cases, including empty strings and strings with whitespace.

**Solution 1** <hr>

```
#include <iostream>

void reverseString(std::string& str) {
   char ch;
   for (int index = 0, len = str.length(); index < len/2; index++) {
      ch = str[index];
      str[index] = str[len-1-index];
      str[len-1-index] = ch;
   }
}

int main() {
   std::string str = "Hello, World!";
   reverseString(str);
   std::cout << str << std::endl; // Outputs: "!dlroW ,olleH"
}

```
**Solution 2** <hr>
```
#include <iostream> 


std::string reverseString(const std::string& str) {
   std::string rev(str.length(), ' ');
   for (int index = 0, len = str.length(); index < len; index++) {
      rev[index] = str[len-1-index];
   }
   return rev;
}

int main() {
   std::string str = "Hello, World!";
   std::string rev = reverseString(str);
   std::cout << rev << std::endl; // Outputs: "!dlroW ,olleH"
}


```

##### Exercise 3 - Prime Number Checker
**Problem** <hr>
> Write a function that takes an integer as input and checks whether it is a prime number. Implement the function using a loop to check if the number is divisible by any integers from 2 to the square root of the number. Return a boolean value indicating whether the number is prime or not. Test the function with different numbers, including prime and non-prime numbers.

**Solution** <hr>

```
#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void prime_func(int prime_num) {
    if (isPrime(prime_num)) {
        std::cout << prime_num << " is a prime number" << std::endl;
    }
    else {
        std::cout << prime_num << " is not a prime number" << std::endl;
    }
}

int main() {
    std::cout << "Enter an integer: " << std::endl;
    int prime_checker;
    std::cin >> prime_checker;
    prime_func(prime_checker);

    return 0;
}

```


##### Exercise 4 - Fibonacci sequence
**Problem** <hr>

> 1. Create a function that takes an integer as a parameter, representing the length of the Fibonacci sequence.
2 In the function, initialize two variables with the first two numbers of the sequence (0 and 1).
3.Use a loop to generate the remaining numbers of the sequence by adding the previous two numbers.
4.Print each number of the sequence.

**Solution** <hr>


##### Exercise 5 - Factorial
**Problem** <hr>

> 1. Create a function that takes an integer as a parameter, representing the number to calculate the factorial of.
2.In the function, initialize a variable with the value 1.
3.Use a loop to multiply the variable by each number from 1 to the given number.
4.Print the final value of the variable.

**Solution** <hr>


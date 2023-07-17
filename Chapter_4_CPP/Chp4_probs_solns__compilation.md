### Chapter 4 - [[Fundamental Data Types]]

**Problem** <hr>

> Integer to Character Conversion: Write a program that prompts the user to enter an integer between 65 and 90 and then converts it to the corresponding uppercase character using static casting. Display the converted character.

**Solution** <hr>

```Cpp
#include <iostream>

void int_Char_Converter(int x) {
    char charEquivalent = static_cast<char>(x);
    std::cout << "The char equivalent of the input integer is: " << charEquivalent << std::endl;
}

int main() {
    std::cout << "This is an integer to character converter program" << std::endl;
    std::cout << "Enter an integer between 65 and 90: " << std::endl;
    int integerInput{};
    std::cin >> integerInput;

    while (65 > integerInput || integerInput > 90) {
        std::cout << "Enter an integer between 65 and 90: " << std::endl;
        std::cin >> integerInput;
    }

    int_Char_Converter(integerInput);

    return 0;
}

```

##### Exercise 2: std::string

**Problem** <hr>

> Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of letters in their name (use the `std::string::length()` member function to get the length of the string). For simplicity, count any spaces in the name as a letter.
> 
> Sample output:
	Enter your full name: John Doe
	Enter your age: 32
	Your age + length of name is: 40
	Reminder: We need to be careful not to mix signed and unsigned values. `std::string::length()` returns an unsigned value. If you’re C++20 capable, use `std::ssize()` to get the length as a signed value. Otherwise, static_cast the return value of `std::string::length()` to an int.

	
**Solution** <hr> 
```Cpp
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter your full name: ";
    std::string fullName;
    std::getline(std::cin, fullName);

    std::cout << "How old are you: ";
    int age;
    std::cin >> age;
    std::cin.ignore(); // Ignore the newline character left in the input stream

    int letters = static_cast<int>(fullName.length());
    std::cout << "Your age + length of your name is: " << age + letters << '\n';

    return 0;
}

```

##### Exercise 3: Decimal inputs

**Problem** <hr>

>Write the following program: The user is asked to enter 2 floating point numbers (use doubles). The user is then asked to enter one of the following mathematical symbols: +, -, * , or /. The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.
>
Example of program:
Enter a double value: 6.2
Enter a double value: 5
Enter one of the following: +, -, *, or /: *
6.2 * 5 is 31

**Solution 1** <hr>

```Cpp
#include <iostream>
#include <string>
#include <string_view>

int main() {
    std::cout << "Enter a decimal value to compute:\n";
    double x {};
    std::cin >> x;

    std::cout << "Enter a decimal value to compute:\n";
    double y {};
    std::cin >> y;

    std::cout << "Enter an operator:\n" << "Choose between *, +, -, /\n";
    char oper {};
    std::cin >> oper;

    if (oper == '+') {
        std::cout << x + y;
    } else if (oper == '-') {
        std::cout << x - y;
    } else if (oper == '*') {
        std::cout << x * y;
    } else if (oper == '/') {
        std::cout << x / y;
    } else {
        std::cout << "Invalid symbol" << std::endl;
    }

    return 0;
}

```

**Solution 2** <hr>

```Cpp
#include <iostream>

int main()
{
    double x, y;
    char oper;

    std::cout << "Enter a decimal value to compute: ";
    std::cin >> x;

    std::cout << "Enter a decimal value to compute: ";
    std::cin >> y;

    std::cout << "Enter an operator (+, -, *, or /): ";
    std::cin >> oper;

    // Input validation loop
    while (oper != '+' && oper != '-' && oper != '*' && oper != '/')
    {
        std::cout << "Invalid symbol. Please enter a valid operator (+, -, *, or /): ";
        std::cin >> oper;
    }

    double result;
    switch (oper)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0)  // Check for division by zero
                result = x / y;
            else
            {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1; // Terminate the program with an error code
            }
            break;
    }

    std::cout << x << " " << oper << " " << y << " is " << result << std::endl;

    return 0;
}

```


**Solution 3** <hr>

```Cpp
#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or / ";
    char operation{};
    std::cin >> operation;
    return operation;
}

void printResult(double x, char operation, double y)
{
    if (operation == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (operation == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (operation == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (operation == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
    double x { getDouble() };
    double y { getDouble() };

    char operation { getOperator() };

    printResult(x, operation, y);

    return 0;
}
```



	
	
	


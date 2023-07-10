### Chapter 4 - [[Fundamental Data Types]]

##### Exercise 1 
**Problem** <hr>

> Write a program that calculates the area of a circle. Prompt the user to enter the radius as a floating-point number and use the `double` data type to store the radius and calculate the area. Display the result with two decimal places.

**Solution** <hr>

``` 
#include <iostream>

void rad_calculator(double GivenRad) {
    std::cout << " The area of the circle is: " << 3.14159265 * (GivenRad * GivenRad) << std::endl;

}

int main () {

    std::cout << " Enter a the radius of a circle in decimal: " << std::endl;
    double rad_input {};
    std::cin >> rad_input;
    rad_calculator(rad_input);
    return 0;
}
```

##### Exercise 2
**Problem** <hr>

> Write a program that calculates the sum of the first `n` natural numbers using the `unsigned int` data type. Prompt the user to enter the value of `n` and calculate the sum using a loop. Display the sum at the end.


**Solution** <hr>

``` 
#include <iostream>

int main() {
    std::cout << "Enter an integer: " << std::endl;
    unsigned int n_input {};
    std::cin >> n_input;
    unsigned int sum = 0;

    for (int i = 1; i <= n_input; i++) {
        sum += i;
        std::cout << "Solution: " << i << " + " << sum - i << " = " << sum << std::endl;
    }

    return 0;
}
```

##### Exercise 3
**Problem** <hr>

> Write a program that converts a given temperature in Fahrenheit to Celsius. Prompt the user to enter the temperature as a floating-point number using the `float` data type. Perform the conversion using the formula `C = (F - 32) * 5/9` and display the result with two decimal places


**Solution** <hr>

``` 
#include <iostream> 

void Celsius_converter(double Celc) {
    std::cout << Celc << " is " << ((Celc * 9) / 5) + 32 << " Farenheit " << std::endl;
}

void Farenheit_converter(double Faren) {
    std::cout << Faren << " is " << ((Faren - 32) * 5) / 9 << " Celsius " << std::endl;
}

int main() {
    std::cout << "Type C to convert Celsius to Fahrenheit " << std::endl;
    std::cout << "Type F to convert Fahrenheit to Celsius " << std::endl;
    std::string user_input {};
    std::cin >> user_input;

    if (user_input == "C") {
        std::cout << "Enter Celsius: " << std::endl;
        double Celsius_Input {};
        std::cin >> Celsius_Input;
        Celsius_converter(Celsius_Input);
    } // Added closing brace here

    else if (user_input == "F") {
        std::cout << "Enter Fahrenheit: " << std::endl;
        double Fahrenheit_Input {};
        std::cin >> Fahrenheit_Input;
        Farenheit_converter(Fahrenheit_Input);
    }

    return 0;
}

```
### Chapter 1  - [[Basics of C++]]

``` 
1.1
Statements and the structure of a program
1.2
Comments
1.3
Introduction to objects and variables
1.4
Variable assignment and initialization
1.5
Introduction to iostream: cout, cin, and endl
1.6
Uninitialized variables and undefined behavior
1.7
Keywords and naming identifiers
1.8
Whitespace and basic formatting
1.9
Introduction to literals and operators
1.10
Introduction to expressions

```
##### Exercise 1 
**Problem** <hr>

> Create a program that asks the user to enter a decimal number, waits for them to input a number, then tells them what half of that number is. The program should produce the following output (assume the user entered 10.0 as input):
	Enter a decimal number: 10.0 Half of that number is: 5.0

**Solution** <hr>

```
#include <iostream>

int main() {
    std::cout << "Enter a float: " << std::endl;

    float user_input{};
    std::cin >> user_input;

    std::cout << "The half of your input is: " << user_input / 2.0 << std::endl;

    return 0;
}
```
##### Exercise 2

**Problem** <hr>

> Write a program that prompts the user to enter two integers, waits for them to input the numbers, and then displays the sum of the two numbers. The program should produce the following output (assume the user entered 3 and 5 as inputs):
	Enter the first number: 3 Enter the second number: 5 The sum of the numbers is: 8
<hr>

**Solution** <hr>

```
#include <iostream>

int main() {
    std::cout << "Enter two integers: " << std::endl;
    int num_1{};
    int num_2{};

    std::cin >> num_1 >> num_2;

    std::cout << "The sum of your inputs is: " << num_1 + num_2 << std::endl;

    return 0;
}
```
##### Exercise 3 

**Problem** <hr>

>Develop a program that asks the user to enter a positive integer, waits for them to input a number, and then determines if the number is even or odd. The program should produce the following output (assume the user entered 7 as input):
  Enter a positive integer: 7 The number is odd.

**Solution** <hr>

```

#include <iostream>

int main() {
    int number{};
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even" << std::endl;
    } else {
        std::cout << "The number is odd" << std::endl;
    }

    return 0;
}

```
##### Exercise 4

**Problem** <hr>

>  Create a program that prompts the user to enter the radius of a circle, waits for them to input a number, and then calculates and displays the area of the circle. The program should produce the following output (assume the user entered 2.5 as input):
    Enter the radius of the circle: 2.5 The area of the circle is: 19.

**Solution** <hr>

```
#include <iostream>

int main() {
    float input_radius {};

    std::cout << "Enter the radius of the circle: ";
    std::cin >> input_radius;

    float area = 3.14 * (input_radius * input_radius);

    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}
```
##### Exercise 5

**Problem**
>Write a program that asks the user to enter three numbers, waits for them to input the numbers, and then finds and displays the largest number among the three. The program should produce the following output (assume the user entered 10, 7, and 13 as inputs):
  Enter the first number: 10 Enter the second number: 7 Enter the third number: 13 The largest number is: 13

```
#include <iostream>
using namespace std;

int main() {
    int a, b, c {};
    cout << "Enter the three numbers a, b & c" << endl;
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "The Largest Among Three Numbers is : " << a << endl;
        } else {
            cout << "The Largest Among Three Numbers is : " << c << endl;
        }
    } else {
        if (b >= c) {
            cout << "The Largest Among Three Numbers is : " << b << endl;
        } else {
            cout << "The Largest Among Three Numbers is : " << c << endl;
        }
    }

    return 0;
}
```



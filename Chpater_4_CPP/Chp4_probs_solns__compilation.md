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




	
	
	


#include <iostream>
# include <iomanip>

int main() {
    // 1. Double
    double pi =  3.14159265358979323846;
    std::cout << std::setprecision(15) << "The value of pi is: " << pi << std::endl;

    // 2. Char
    char grade = 'A';
    std::cout << "My grade in the exam is: " << grade << std::endl;

    // 3. Bool
    bool isRaining = true;
    std::cout << "Is it raining today? " << (isRaining ? "Yes" : "No") << std::endl;

    // 4. Float
    float temperature = 25.8;
    std::cout << "The temperature is: " << temperature << " degrees Celsius" << std::endl;

    // 5. Int
    int age = 30;
    std::cout << "I am " << age << " years old" << std::endl;

    return 0;
}

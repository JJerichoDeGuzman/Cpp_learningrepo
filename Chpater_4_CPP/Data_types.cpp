#include <iostream>
#include <string>

int main() {

    std::cout << " Enter your full name" <<std::endl; 
    std::string fullName {};
    std::getline(std::cin >> std::ws, fullName); 

    std::cout << " How old are you: " << std::endl;
    int age {}; 
    std::cin >> age; 

    // age is signed, and name.length() is unsigned -- we shouldn't mix these
    // We'll convert name.length() to a signed value
    int letters {static_cast<int>(fullName.length())}; 
    std::cout << "Your age + length of your name is: " << age + letters  << '\n'; 


return 0;     
}
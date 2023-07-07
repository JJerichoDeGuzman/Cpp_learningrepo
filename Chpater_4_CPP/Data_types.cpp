#include <iostream> 

int main() {

    std::cout << " Write a single character " << std::endl;
    char Holder{}; 
    std::cin >> Holder; 

    int NewHolder = static_cast<int>(Holder);

    std:: cout << NewHolder  << std::endl; 




    return 0; 
}
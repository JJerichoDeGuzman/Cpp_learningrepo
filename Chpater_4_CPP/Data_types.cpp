#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter an integer"; 
    int x {};
    std::cin >> x; 

    if  (x > 0 ) {
        std::cout << x << "is a positive number";
    } 

    else if ( x == 0 ) {
        
        std::cout << x << "is a zero";
    }

    else {

        std::cout << x << "is a negative"; 

    }

    return 0;
}
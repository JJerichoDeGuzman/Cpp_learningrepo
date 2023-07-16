#include <iostream>
#include <string>
#include <string_view>

int main()
{

    std::cout << "Enter a decimal value to compute: \n";
    double x {}; 
    std::cin >> x; 

    std::cout << "Enter a decimal value to compute: \n";     
    double y {}; 
    std::cin >> y;

    std::cout << "Enter an operator: \n" << " Choose betwee, *, +, -, / \n";   
    char oper {}; 
    std::cin >> oper; 

    if (oper == '+'){
        std::cout << x + y; 
    }

    else if ( oper == '-'){
        std::cout << x - y; 
    }
    else if ( oper == '*'){
        std::cout << x * y; 
    }
    else if ( oper == '/' ){
        std::cout << x / y;
    }
    else{ 
        std::cout << " Invalid symbol " << std::endl;
    }

return 0; 
}


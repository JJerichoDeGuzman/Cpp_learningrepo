#include <iostream> 

int main () {

    std::cout << "Enter an integer: " << std::endl; 
    unsigned int n_input = 0; 
    std::cin >> n_input;
    

    for ( int i = 1; i <= n_input; i++ ) {
        n_input = n_input + i; 
        std::cout << n_input << std::endl;
    }

}
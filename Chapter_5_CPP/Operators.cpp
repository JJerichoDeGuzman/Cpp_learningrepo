#include <iostream>

    //Check if input is odd or even
    void isEven(int inputCheck){
        int checker {inputCheck % 2};

        if (checker == 0){
            std::cout << inputCheck << " is even. \n";
        }
        else {
            std::cout << inputCheck << " is odd. \n";
        }

    }


int main(){
    
    //Ask for the user 
    std::cout << "Enter the integer: \n";
    int userIntegerInput {};
    std::cin >> userIntegerInput;

    isEven(userIntegerInput);

    return 0;
}
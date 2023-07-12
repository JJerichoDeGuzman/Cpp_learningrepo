#include <iostream>

void int_Char_Converter (int x){

    char charEquivalent = static_cast<char>(x);
    std::cout << "The char equivalent of the input integer is : " <<  charEquivalent << std::endl;

}

int main() {

        std::cout << "This is an integer to character converter program" << std::endl;
        std::cout << "Enter an integer between 65 and 90: " << std::endl;
        int integerInput {};
        std::cin >> integerInput; 

        while ( 65 > integerInput || integerInput > 90){
            std::cout << "Enter an integer between 65 and 90: " << std::endl; 
            std::cin >> integerInput; 
        }

    int_Char_Converter(integerInput);

    return 0;
}



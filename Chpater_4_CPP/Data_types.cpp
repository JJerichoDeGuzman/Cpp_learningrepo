#include <iostream> 

void Celsius_converter(double Celc)
{
    std::cout << Celc << " is " << ((Celc  * 9) / 5 ) + 32 << " Farenheit " << std::endl;
}

void Farenheit_converter(double Faren) {

    std::cout << Faren<< " is " << ((Faren  - 32) *( 5 ) / 9 ) << " Celsius " << std::endl;

    }
int main () {
   
    std::cout << " Type C to convert Celsius to Farenheit "  << std::endl; 
    std::cout << " Type F to cover Farenheit to celsius " << std::endl; 
    std::string user_input {};
    std::cin >> user_input; 

    if (user_input == "C") {

        std::cout << " Enter  Celsius "  <<  std::endl; 
        double Celcius_Input {};
        std::cin >> Celcius_Input;
        Celsius_converter(Celcius_Input);
    
    }
    
    else if (user_input == "F") {
        std::cout << " Enter  Farenheit "  <<  std::endl; 
        double Faren_Input {};
        std::cin >> Faren_Input;
        Farenheit_converter(Faren_Input); 
    }
    

    
}
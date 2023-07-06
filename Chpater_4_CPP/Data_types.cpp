#include <iostream> 

void rad_calculator(double GivenRad) {
    std::cout << " The area of the circle is: " << 3.14159265 * (GivenRad * GivenRad) << std::endl; 

}

int main () {

    std::cout << " Enter a the radius of a circle in decimal: " << std::endl; 
    double rad_input {}; 
    std::cin >> rad_input;
    rad_calculator(rad_input);



    return 0;
}
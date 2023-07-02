#include <iostream>

void CircArea_Calc(double circ_radius) {    
    std::cout << 3.14159265 * (circ_radius * circ_radius); << std::endl; 
}

void RectArea_Calc (double baseR, double HeightR) {
    std::cout << " The area of rectangle is " << BaseR * HeightR << std::endl; 
}

void TriaArea_Calc (double baseT, double HeighT) {
     std::cout << " The area of triangle is " << (BaseT * HeightT) / 2 << std::endl;
}


int main () {
    std::cout << " Choose shape: Circle or Rectangle, Triangle: " << std::endl;
    std::string shape_choice {};
    std::cin >> shape_choice;

    if { (shape_choice == "triangle")

    std::cout << " What is the radius of your triangle " << std::endl;
    double radius_input {};
    std::cin >> radius_input;
    CircArea_Calc(radius_input)
    
    }

    else {

    std::cout << " Enter the base and height, respectively " << std::endl;
    double base_input {};
    double height_input {};

    std::cin >> base_input >> height_input;
    RectArea_Calc(base_input, height_input)
    TriaArea_Calc(base_input, height_input)

    }
   

    return 0;
}
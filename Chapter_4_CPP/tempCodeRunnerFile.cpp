#include <iostream>

// Computes how far the ball has fallen after x seconds
void heightCalculator (double heightGiven) {
    constexpr double GRAVITY {9.8};
    int time {0};

    // formula: distance fallen = gravity_constant * x_seconds^2 / 2 
    for ( int i = 0; i <= 5; i++) {
        double distanceFallen = GRAVITY * time * time / 2;
        double givenHeightMinusFallenheight = heightGiven - distanceFallen; 

        if (givenHeightMinusFallenheight <= 0) {
            std::cout << "At " << time << " seconds, the ball is on the ground.\n";
            break;
        } else {
            std::cout << "At " << time << " seconds, the ball is at height: " 
                      << givenHeightMinusFallenheight << " meters\n";
        }

        time++;
    }
}

int main(){ 

    // Prompt user for height of towers in meters
    std::cout << "Enter the height of the tower (in meters): \n";
    double towerHeight {};
    std::cin >> towerHeight; 

    // function call
    heightCalculator(towerHeight);

    return 0; 
}

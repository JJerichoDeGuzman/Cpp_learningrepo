#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void prime_func(int prime_num) {
    if (isPrime(prime_num)) {
        std::cout << prime_num << " is a prime number" << std::endl;
    }
    else {
        std::cout << prime_num << " is not a prime number" << std::endl;
    }
}

int main() {
    std::cout << "Enter an integer: " << std::endl;
    int prime_checker;
    std::cin >> prime_checker;
    prime_func(prime_checker);

    return 0;
}

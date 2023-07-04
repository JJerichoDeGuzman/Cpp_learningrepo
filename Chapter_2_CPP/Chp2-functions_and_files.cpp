#include <iostream>

bool isFibonacci(int num) {
    int a = 0;
    int b = 1;

    if (num == a || num == b) {
        return true;
    }

    while (b <= num) {
        int temp = b;
        b = a + b;
        a = temp;

        if (b == num) {
            return true;
        }
    }

    return false;
}

void generateFibonacci(int length) {
    int first = 0;
    int second = 1;

    std::cout << "Fibonacci Sequence: ";

    // Print the first two numbers
    std::cout << first << " " << second << " ";

    for (int i = 2; i < length; i++) {
        int next = first + second;
        std::cout << next << " ";

        // Update the values for the next iteration
        first = second;
        second = next;
    }

    std::cout << std::endl;
}

int main() {
    int length;
    std::cout << "Enter the length of the Fibonacci sequence: ";
    std::cin >> length;

    generateFibonacci(length);

    int input;
    std::cout << "Enter a number to check if it's in the Fibonacci sequence: ";
    std::cin >> input;

    if (isFibonacci(input)) {
        std::cout << input << " is in the Fibonacci sequence" << std::endl;
    } else {
        std::cout << input << " is not in the Fibonacci sequence" << std::endl;
    }

    return 0;
}

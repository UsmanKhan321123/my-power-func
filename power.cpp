#include<iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    // Input base and exponent from the user
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exponent;

    // Calculate and output the result
    std::cout << "Result: " << power(base, exponent) << std::endl;

    return 0;
}

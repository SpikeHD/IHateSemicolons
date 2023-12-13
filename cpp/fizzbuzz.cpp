#include <iostream>

// In order to be able to use this in a conditional statement, we need to return a boolean value. We never return a value, which is "allowed" but is undefined behaviour
bool fizzbuzz(int n, int max) {
    if (n % 3 == 0 && n % 5 == 0 && std::cout << "FizzBuzz\n") {} 
    else if (n % 3 == 0 && std::cout << "Fizz\n") {}
    else if (n % 5 == 0 && std::cout << "Buzz\n") {}
    else if (std::cout << n << "\n") {}

    if (n < max && fizzbuzz(n + 1, max)) {}
}

int main() {
    if (fizzbuzz(1, 100)) {}
}
#include <stdio.h>

int fizzbuzz(int n, int max) {
    if (n % 3 == 0 && n % 5 == 0 && printf("FizzBuzz\n")) {} 
    else if (n % 3 == 0 && printf("Fizz\n")) {}
    else if (n % 5 == 0 && printf("Buzz\n")) {}
    else if (printf("%d\n", n)) {}

    if (n < max && fizzbuzz(n + 1, max)) {}
}

int main() {
    if (fizzbuzz(1, 100)) {}
}

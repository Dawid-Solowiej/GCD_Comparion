#include "GCD.h"

// Implementacja algorytmu GCD przez odejmowanie
unsigned long long GCD_subtraction(unsigned long long a, unsigned long long b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

// Implementacja algorytmu GCD przez modulo
unsigned long long GCD_modulo(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

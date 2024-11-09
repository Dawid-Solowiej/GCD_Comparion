#include "GCDLib/GCD.h"
#include <cassert>
#include <iostream>

int main() {
    // Testy jednostkowe
    assert(GCD_subtraction(48, 18) == 6);
    assert(GCD_modulo(48, 18) == 6);
    assert(GCD_subtraction(10000000000ULL, 3) == 1);
    assert(GCD_modulo(10000000000ULL, 3) == 1);

    std::cout << "Testy jednostkowe zakończone sukcesem.\n";
    return 0;
}

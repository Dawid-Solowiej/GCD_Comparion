#include "../GCDLib/GCD.h"
#include <iostream>
#include <chrono>
#include <iomanip>

template<typename D = std::chrono::microseconds>
class Benchmark {
public:
    Benchmark() { start = std::chrono::high_resolution_clock::now(); }
    typename D::rep elapsed() const {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<D>(end - start).count();
    }
private:
    std::chrono::high_resolution_clock::time_point start;
};

int main() {
    unsigned long long testCases[][2] = {
        {1000, 3},
        {1000000, 3},
        {10000000000ULL, 3}
    };

    for (const auto& pair : testCases) {
        unsigned long long a = pair[0], b = pair[1];

        Benchmark<std::chrono::microseconds> bench1;
        unsigned long long resultSubtraction = GCD_subtraction(a, b);
        auto timeSubtraction = bench1.elapsed();

        Benchmark<std::chrono::microseconds> bench2;
        unsigned long long resultModulo = GCD_modulo(a, b);
        auto timeModulo = bench2.elapsed();

        std::cout << "Dla liczb " << a << " i " << b << ":\n";
        std::cout << "GCD_subtraction wynik: " << resultSubtraction << ", czas: " << timeSubtraction << " us\n";
        std::cout << "GCD_modulo wynik: " << resultModulo << ", czas: " << timeModulo << " us\n\n";
    }

    return 0;
}

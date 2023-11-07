#include <iostream>
#include <cmath>
using namespace std;
int binomialCoefficient(int n, int k, int& recursionDepth) {


    if (k == 0 || k == n) {
        return 1;
    }
    else {
        recursionDepth++;  // Збільшуємо лічильник глибини рекурсії
        return binomialCoefficient(n - 1, k - 1, recursionDepth) + binomialCoefficient(n - 1, k, recursionDepth);
    }
}

int main() {
    int n, k;
    std::cout << "Enter n and k: ";
    std::cin >> n >> k;

    int recursionDepth = 0;  // Ініціалізуємо лічильник глибини рекурсії
    if (k >= 0 && k <= n) {
        int result = binomialCoefficient(n, k, recursionDepth);
        std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;
        std::cout << "recursionDepth: " << recursionDepth << std::endl;
    }
    else {
        std::cout << "ERROR k = [0, n]." << std::endl;
    }

    return 0;
}
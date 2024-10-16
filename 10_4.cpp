#include <iostream>
#include <cmath>

int main() {
    double e = 1.0; // Initialize e to 1 (the first term in the series)
    double term = 1.0; // Initialize the first term (1/0! = 1)

    int n = 1; // Initialize the term number to 1

    // Calculate 'e' until the specified accuracy is reached
    while (std::abs(term) >= 0.0001) {
        n++;
        term = term / n; // Calculate the next term (1/n!)
        e += term; // Add the term to 'e'
    }

    std::cout << "The value of e is approximately: " << e << std::endl;

    return 0;
}

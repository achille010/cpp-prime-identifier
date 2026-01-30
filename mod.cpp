#include <iostream>

using namespace std;

int main() {
    long long base, exponent, modulus;

    cout << "Enter base, exponent, and modulus: ";
    cin >> base >> exponent >> modulus;

    if (modulus <= 0) {
        cout << "Modulus must be positive.\n";
        return 0;
    }

    if (exponent < 0) {
        cout << "Exponent must be non-negative.\n";
        return 0;
    }

    long long result = 1;
    base = base % modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }

        base = (base * base) % modulus;
        exponent /= 2;
    }

    cout << "Result: " << result << endl;
    return 0;
}

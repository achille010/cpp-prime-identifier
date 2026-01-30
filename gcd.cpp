#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Both numbers must be positive.\n";
        return 0;
    }

    int x = a;
    int y = b;

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    cout << "GCD(" << a << ", " << b << ") = " << x << endl;

    return 0;
}

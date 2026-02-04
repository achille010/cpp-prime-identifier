#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 2) {
        cout << "Numbers less than 2 don't have prime factors.\n";
        return 0;
    }

    int original = n;
    vector<int> factors;

    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        factors.push_back(n);
    }

    cout << "Prime factorization of " << original << ": ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}

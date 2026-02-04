#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer \n=>";
    cin >> n;

    if (n < 2) {
        cout << "There doesn't exist any prime numbers less than 2.\n";
        return 0;
    }

    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime numbers up to " << n << ":\n";
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            cout << i << " \n" << endl;
        }
    }

    return 0;
}

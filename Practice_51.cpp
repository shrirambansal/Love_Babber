#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int num_primes = 10005;
    bool primes[num_primes];
    for (int i = 2; i != num_primes; ++i) {
        primes[i] = true;
    }

    for (int i = 2; i != int(sqrt(num_primes)); ++i) {
        if (primes[i]) {        
            for (int j = 2; i * j < num_primes; ++j) {
                primes[i*j] = false;
            }
        }
    }
    int n;
	cout << "Input an integer:\n";
    cin >> n;
	cout << "Twin primes are:\n";
        for (int i = n; i - 2 >= 0; --i) {
            if (primes[i] && primes[i-2]) {
                cout << i-2 << " " << i << endl;
                break;
            }
    }

    return 0;
}

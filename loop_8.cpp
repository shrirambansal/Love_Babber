#include <iostream>
using namespace std;
int main() {
    int n , sum = 0;
    cin >> n;
    int i = 2;
    while (i< n)
    {
        if (n % i == 0)
        {
            cout << "not prime for " << i <<endl;
        }
        else {
            cout << "prime for "<< i <<endl;
        }
        i = i+1;
    }
    
}
#include <iostream>
using namespace std;
int main() {
    int n , sum = 0;
    cin >> n;
    int i = 2;
    while (i<= n)
    {
        sum = sum+i;
        i = i+2;
    }
    cout << sum;
}

#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if(a<0) {
        cout<< "a is negative";
    }
    else if(a>0) {
        cout<< "a is positive";
    }
    else {
        cout<< "a is zero";
    }
}

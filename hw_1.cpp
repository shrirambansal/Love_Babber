#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if(ch > 96 && ch < 123 ) {
        cout << "lowercase";
    }
    else if (ch > 64 && ch < 91) {
        cout << "uppercase";
    }
    else if (ch > 47 && ch < 58) {
        cout << "Numeric";
    }
    else {
        cout << "symbol";
    }

}

#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;

    switch (ch) {
        case '1' : cout << "First1" <<endl;
                 break;
        case '2' : cout << "First2" <<endl;
                 break;
        case '5' : cout << "First5" <<endl;
                 break;
        case '6': cout << "First6" <<endl;
                 break;
        default : cout << "default" <<ch <<endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    int amount;
    cout << "Enter the amount:";
    cin >> amount;
    int rs100, rs50, rs20, rs1;

    switch (1) {
        case 1: rs100 = amount/100;
                amount = amount%100;
                cout << "Number of 100 rs notes require : " <<rs100 <<endl;
        
        case 2: rs50 = amount/50;
                amount = amount%50;
                cout << "Number of 50 rs notes require : " <<rs50 <<endl;

        case 3: rs20 = amount/20;
                amount = amount%20;
                cout << "Number of 20 rs notes require : " <<rs20 <<endl;

        case 4: rs1 = amount/1;
                amount = amount%1;
                cout << "Number of 1 rs notes require : " <<rs1 <<endl;

    }
}

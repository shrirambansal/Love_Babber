#include <iostream>
 
using namespace std;
 
int main()
{
    int sale_price, qty, ctr = 0, sum1 = 0, sum2 = 0;
    cout << "Input Sales Price and Sales Quantity: ";
    while (cin >> sale_price >> qty)
    {
        sum1 += sale_price * qty;
        sum2 += qty;
 
        ctr++;
    }
 
    cout << "\nTotal of the sales amount and the average of the sales quantity:\n";
    cout << sum1 << endl << static_cast<int>(static_cast<double>(sum2) / ctr + 0.5) << endl;
 
    return 0;
}

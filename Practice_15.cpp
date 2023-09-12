#include <iostream>
using namespace std;
 
int main()
{
    float kel, frh;
		cout << "\n\n Convert temperature in Kelvin to Fahrenheit  :\n";
		cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    frh = (9.0 / 5) * (kel - 273.15) + 32;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Fahrenheit : " << frh << endl;
	cout << endl;
    return 0;
}

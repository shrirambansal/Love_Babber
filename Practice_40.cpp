#include<iostream>
using namespace std;

int main()
{
    float kmph, miph;
	cout << "\n\n Convert kilometers per hour to miles per hour :\n";
	cout << "----------------------------------------------------\n";	
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << " The "<< kmph <<" Km./hr. means "<< miph << " Miles/hr." << endl;
	cout << endl;
    return 0;
}

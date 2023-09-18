#include <iostream>
using namespace std;
 
int main()
{
	cout << "\n\n Swap two numbers without using third variable:\n";
	cout << "---------------------------------------------------\n";
	int num1, num2, temp;
	cout << " Input 1st number : ";
	cin >> num1 ;
	cout << " Input 2nd number : ";
	cin >> num2;	
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
    cout << " After swapping the 1st number is : "<< num1 <<"\n" ; 
    cout << " After swapping the 2nd number is : "<< num2 <<"\n\n" ; 	
}

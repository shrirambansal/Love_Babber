#include <iostream>
using namespace std;
 
int main()
{
int a,i=0;
    cout << "\n\n Print the multiplication table of a number upto 10:\n";
	cout << "--------------------------------------------------------\n";
	cout << " Input a number: ";
	cin>> a;
	for (i=1;i<=10;i++)
	{
	cout << a<<" x "<< i << " = "<<a*i<<"\n" ;
	}
	
}

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
float ar,s;
    cout << "\n\n Print the area of a hexagon:\n";
	cout << "---------------------------------\n";
	cout << " Input the side of the hexagon: ";
	cin>> s;
	ar= (6*(s*s))/(4*tan(M_PI/6));
	cout<<"The area of the hexagon is: "<<ar<<"\n";

}

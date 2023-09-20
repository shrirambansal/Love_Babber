#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
double d,la1,la2,lo1,lo2,er,r;
    cout << "\n\n Print the the distance between two points on the surface of earth:\n";
	cout << "-----------------------------------------------------------------------\n";
	cout << " Input the latitude of coordinate 1: ";
	cin>> la1;
	cout << " Input the longitude of coordinate 1: ";
	cin>> lo1;
	cout << " Input the latitude of coordinate 2: ";
	cin>> la2;
	cout << " Input the longitude of coordinate 2: ";
	cin>> lo2;	
	r=0.01745327; //Pi/180=3.14159/180
	la1=la1*r;
	la2=la2*r;
	lo1=lo1*r;
	lo2=lo2*r;
	er=6371.01; //Kilometers
	d=er * acos((sin(la1)*sin(la2)) + (cos(la1)*cos(la2)*cos(lo1 - lo2)));
	cout<<" The distance between those points is: "<<d<<"\n";
}

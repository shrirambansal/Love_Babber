#include <iostream>
#include <string>
using namespace std;
int main ()
{
const float pi = 3.14159;
float R, H, V;
cout << "Input Cone's radius: ";
cin >> R;
cout << "Input Cone's height: ";
cin >> H;
// Cone's volume.
V = (1.0/3.0)*pi*(R*R)*H;
cout << "The volume of the cone is: " << V ;
return 0;
}

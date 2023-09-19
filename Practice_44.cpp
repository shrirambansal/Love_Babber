#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    float p,r,t,cp,ci;
		cout << "\n\n Calculate the Compound Interest :\n";
		cout << " -------------------------------------\n"; 	
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;	
    ci=p*pow((1+r/100),t)-p;	
    cp=p*pow((1+r/100),t);
    cout<<" The Interest after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<ci;    
    cout << endl; 
	cout<<" The total amount after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<cp;    
    cout << endl; 
       cout << endl;
    return 0;
}

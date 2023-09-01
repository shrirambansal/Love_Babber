 #include <iostream>
 using namespace std;
 int main() {
    int n;
    int a = 0, b = 1; 
    cin >> n; 
    cout << a <<" ";
    cout << b << " ";
    for (int i=1; i<=(n-2);i++) {
        int nxtnumber = a+b;
        cout <<nxtnumber <<" ";
        a = b;
        b = nxtnumber;
    }
 }

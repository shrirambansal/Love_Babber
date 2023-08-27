 #include <iostream>
 using namespace std;
 int main() {
    // size of array is 4 
    // but index number is count from
    // 0, 1, 2, 3
    //index = size of array - 1
    int a[4]={1, 2,3,4};
    cout << a[0];
    cout << a[1];
    cout << a[2];
    // garbage value given when we out the range
    cout << a[8];

    int arr[8];
    cout << arr[15]; 
 }

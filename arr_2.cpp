#include <iostream>
using namespace std;
int main() {
    int arr1[5] = {0};
    //  in array we initilize entire array 
    // with zero only given one value
    // but only this work with zero not working with
    // other numbers by this they initilze the value of zero index 
    // but other occupied garbage value..

    cout << arr1[0] <<endl;
    cout << arr1[1] <<endl;
    cout << arr1[2] <<endl;
    cout << arr1[3] <<endl;
    cout << arr1[4] <<endl;
    cout << "this is intilize of 0" << endl;

    int arr2[5] = {1};
    cout << arr2[0] <<endl;
    cout << arr2[1] <<endl;
    cout << arr2[2] <<endl;
    cout << arr2[3] <<endl;
    cout << arr2[4] <<endl;

    cout << "this is intilize of any number i.e problem" << endl;
    // here only first index is 1
    // remaining all is grabage value
    // for this problem we have a solution
    // using the for loop

    int arr3[5];
    // 5 is size of array
    for(int i =0; i < 5; i++ ) {
        arr3[i] = 1;// value which we have to intilize the entire array
    }
    cout << arr3[0] <<endl;
    cout << arr3[1] <<endl;
    cout << arr3[2] <<endl;
    cout << arr3[3] <<endl;
    cout << arr3[4] <<endl;

    cout << "this is the solution of the problem" << endl;
}

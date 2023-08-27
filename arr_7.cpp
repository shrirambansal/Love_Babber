#include <iostream>
using namespace std;
void printAray(int arr[], int size) {
    cout << "Inside the function" << endl;

    // fuction me array update ho jata hai main function me bhi
    // variable me only copy bnta tha but
    // array me vo address de rha hai so
    // address pe value change ho jata hai
    arr[2] = 120;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {


    int arr[3] = {1, 2, 3};
    int size = 3;
    printAray(arr, size);
    cout << "Inside the main Function" << endl;
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

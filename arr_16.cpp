#include <iostream>
using namespace std;

void SwAp(int num1, int num2){
    int temp;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout << num1;
    cout << num2;
  
}

void print_Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[2] = {1, 2};
    int size = 2;

    SwAp(arr[0], arr[1]);
    print_Array(arr, size);
}

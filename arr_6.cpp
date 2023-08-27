#include <iostream>
using namespace std;

int sum_of_array(int arr[], int size) {
    int s = 0;
    for(int i = 0; i < size; i++) {
        s = s + arr[i];
    }
    return s;
}

int main() {
     int size;
     cout << "size of array is ";
     cin >> size;

     int arr[100];

     for (int i =0; i<size; i++){
        cin >> arr[i];
     }

     int sum = sum_of_array(arr, size);
     cout << "sum of array is " <<sum;
}

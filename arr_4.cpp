#include <iostream>
using namespace std;

void print_array (int arr1[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
}
int main() {
// here we calculate the size of arr

    int arr[] = {1,5,8,8,9,25};
    int size_arr = sizeof(arr)/sizeof(int);
    print_array(arr, size_arr);

}

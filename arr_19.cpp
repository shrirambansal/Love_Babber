#include <iostream>
using namespace std;

void print_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void input_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void SOrt(int arr[], int size) {
    int left = 0, right = size -1;
    while (left < right)
    {
        while(arr[left] == 0 && left < right) {
            left++;
        }
        while (arr[right] == 1 && left < right) 
        {
            right--;
        }

        if (left < right) {
            swap(arr[left], arr[right]);
            right--;
            left++;
        }

        
    }
    
}

int main() {
    // sort 0, 1
    int size;
    cout << "Size of Array is ";
    cin >> size;

    int arr[100];

    input_Array(arr, size);

    SOrt(arr, size);

    print_Array(arr, size);
}

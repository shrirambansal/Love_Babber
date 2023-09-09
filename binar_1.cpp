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


int binary_search(int arr[], int size, int key) {
    int s, e;
    s = 0;
    e = size - 1;
    int mid = s + (e-s)/2;

    while (s <= e) {
        if (arr[mid] == key) {
            return mid;
        }

        if (key > arr[mid])
        {
            s = mid +1;
        }
        else {
            e = mid -1;
        } 
        mid = s + (e - s)/2;
 
    }
    return -1;

}

int main() {
    int arr[100];
    int size, key;
    cout << "Size of Array is ";
    cin >> size;
    cout << "Key element is ";
    cin >> key;

    input_Array(arr, size);
    int index =binary_search(arr, size, key);
    cout << "Index of key element is " << index;
    
}

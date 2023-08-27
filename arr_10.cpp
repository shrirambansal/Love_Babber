#include <iostream>
using namespace std;


void alternate(int arr[], int size) {
    int start = 0;
    

    while(start < size-1){
        int end = start + 1;
        swap(arr[start], arr[end]);
        start = start + 2;
        
    }
}

void print_Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    
    print_Array(arr, 6);

    alternate(arr, 6);
    
    print_Array(arr, 6);
    return 0;
}

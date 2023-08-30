#include <iostream>
using namespace std;

void input_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void print_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void duplicate(int arr[], int size) {
    for (int i  = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            //arr[i]
            if (arr[i] == arr[j] && i != j) {
                cout << arr[i] << " ";
                break;
            }
        }  
    }
}

int main() {
    int size;
    cout << "Size of Array is ";
    cin >> size;

    int arr[100];
    input_Array(arr, size);
    
  // Initialize the count array
    int count[100] = {0};

  // Traverse the array and update the count array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    print_Array(count, size);

  // Print the unique number of occurrences of each element
    for (int i = 0; i < size; i++) {
    // If the count is 1, then the element has a unique occurrence
        if (count[arr[i]] == 1) {
            cout << arr[i] << " : " << count[arr[i]] << endl;
        }
    }

  return 0;
}


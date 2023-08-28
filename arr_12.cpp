#include "iostream"
using namespace std;

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
    int arr [10] = {1,2,3,4,5,6,7,8,9,5};
    
    duplicate(arr, 10);

    return 0;
}

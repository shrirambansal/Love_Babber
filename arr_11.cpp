#include "iostream"
using namespace std;

void unique(int arr[], int size) {
    for (int i  = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            //arr[i]
            if (arr[i] == arr[j] && i != j)
            {
                break;
            }

            else if (j == size-1) {
                cout << arr[i] << " ";
            }


        }
        
        
    }
}

int main() {
    int arr [10] = {1,5,6,3,2,5,14,1,25,4};
    
    unique(arr, 10);

    return 0;
}

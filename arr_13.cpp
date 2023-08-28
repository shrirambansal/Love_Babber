#include "iostream"
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2) {
    for (int i  = 0; i < size1; i++) {

        for (int j = 0; j < size2; j++) {
            //arr[i]
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }   
    }
}

int main() {
    int arr1[5] = {1,2,3,5};
    int arr2[4] = {7,2,3,8};
    
    intersection(arr1, arr2, 5, 4);

    return 0;
}

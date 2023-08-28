#include "iostream"
using namespace std;

void pairSum(int arr1[], int size, int sum) {
    for (int i  = 0; i < size; i++) {

        for (int j = i; j < size; j++) {
            //arr[i]
            if (((arr1[i]+arr1[j]) == sum) && i != j){
                cout << arr1[i] << " + "<< arr1[j] <<endl;
            }
        }   
    }
}

int main() {
    int arr1[5] = {1,2,3,5};
    //int arr2[4] = {7,2,3,8};
    
    pairSum(arr1, 5, 4);

    return 0;
}

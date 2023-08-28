#include "iostream"
using namespace std;

void triplateSum(int arr1[], int size, int sum) {
    for (int i  = 0; i < size; i++) {

        for (int j = i; j < size; j++) {
            //arr[i]
            for (int k = j; k < size; k++) {
                if (((arr1[i]+arr1[j]+arr1[k]) == sum) && i != j && j != k && k != i )
                {
                    cout << arr1[i] << " + "<< arr1[j] << " + "<< arr1[k] <<endl;
                }
            }
        }   
    }
}

int main() {
    int arr1[5] = {1,2,3,5};
    //int arr2[4] = {7,2,3,8};
    
    triplateSum(arr1, 5, 10);

    return 0;
}

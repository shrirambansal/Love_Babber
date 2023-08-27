#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = INT_MIN;
    //int maxi = INT_MIN;
    for (int i = 0; i <size; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
        // maxi = max(maxi, num[i]);
    }
    return max;//maxi
}

int getMin(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i <size; i++){
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int size_arr;
    cout << "Size of array  is ";
    cin >> size_arr;

    // int arr[size];
    // it is a bad pratice dont do this
    int arr[100];
    for (int i = 0; i < size_arr; i++){
        cin >> arr[i];
    }

    cout << "Maximum value is " << getMax(arr, size_arr) << endl;
    cout << "Minimum value is " << getMin(arr, size_arr) << endl;
}

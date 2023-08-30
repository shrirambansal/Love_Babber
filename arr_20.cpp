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

void sort012(int *arr, int n)
{
   int right = n-1;
   int left = 0;
   int mid = 0;
   while(mid<=right){
      if(arr[mid]==0){
         swap(arr[mid++], arr[left++]);
         continue;
      }
      if(arr[mid]==1){
         mid++;
         continue;
      }

      if(arr[mid]==2){
         swap(arr[mid], arr[right]);
         right--;
         continue;
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

    sort012(arr, size);

    print_Array(arr, size);
}

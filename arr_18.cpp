#include <iostream>
// 
using namespace std;

void print_Array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Initialize the count array
  int count[100] = {0};

  // Traverse the array and update the count array
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }
  print_Array(count, n);

  // Print the unique number of occurrences of each element
  for (int i = 0; i < n; i++) {
    // If the count is 1, then the element has a unique occurrence
    if (count[arr[i]] >= 1) {
      cout << arr[i] << " : " << count[arr[i]] << endl;
    }
  }

  return 0;
}

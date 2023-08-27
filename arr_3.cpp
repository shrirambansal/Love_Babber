#include <iostream>
using namespace std;

void print_array (char arr1[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
}
int main() {
// here we calculate the size of arr

    int arr[] = {1,5,8,8,9,25};
    int size = sizeof(arr)/sizeof(int);
    cout << size << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    int size_ch = 5;
    print_array(ch, size_ch);

}

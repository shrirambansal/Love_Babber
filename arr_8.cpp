// linear search
#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = {1,4,8,6,2,3,0,5,7,9};
    int size = 10;
    int key = 3;
    // whether 1 is present in it or not?
    int ans = search(arr, size, key);
    cout << ans;


}

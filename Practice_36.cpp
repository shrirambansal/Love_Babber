#include <iostream>
using namespace std;
int * test(int arr[], int s1) {
    static int result[2];
    for(int i = 0; i<=s1; i++)
    {
        arr[i]%2 == 0 ? result[0]+=arr[i] : result[1]+=arr[i];
    }
	return result;
}
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *eo;
    int s1 = sizeof(array1) / sizeof(array1[0]);
    cout << "Original array: ";
    for (int i=0; i < s1; i++)
      cout << array1[i] <<" ";
    eo = test(array1, s1);
    cout <<"\nSum of all even and odd numbers: " << *(eo+0) << "," << *(eo+1);
    return 0;
}

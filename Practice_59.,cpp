#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(101, 0);
    int n, mode=0;

    while (cin >> n) {
        nums[n]++;
        if (nums[n] > mode) { mode=nums[n]; }
      }
   
    for (int i = 0; i != nums.size(); ++i) {
        if (nums[i] == mode) 
        {
            cout << i << endl; 
            
        }
    }

    return 0;
}

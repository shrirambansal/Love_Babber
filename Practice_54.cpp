#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  
    vector<int> triangle_sides(3);

        cin >> triangle_sides[0] >> triangle_sides[1] >> triangle_sides[2];

        sort(triangle_sides.begin(), triangle_sides.end());

        if (triangle_sides[0]*triangle_sides[0] + triangle_sides[1]*triangle_sides[1] == triangle_sides[2]*triangle_sides[2]) 
        {
            cout << "Yes" << endl; 
        }
        else 
        {
            cout << "No" << endl;
        }
 
    return 0;
}

#include <iostream>
using namespace std;
 
int main() 
{
 cout << "\n\n Print a mystery series:\n";
	cout << "-------------------------\n";
	cout << " The series are: \n";	
   int nm1 = 1;
   while (true) 
   {
      ++nm1;
      if ((nm1 % 3) == 0) 
      continue;
      if (nm1 == 50) 
      break;
      if ((nm1 % 2) == 0) 
      {
         nm1 += 3;
      } 
      else 
      {
         nm1 -= 3;
      }
      cout << nm1 << " ";
   }
   cout << endl;
   return 0;
}

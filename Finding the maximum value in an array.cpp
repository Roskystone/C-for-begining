#include <iostream>
using namespace std;

int main() {
   const int ARRAY_SIZE = 10;
   int userArray[ARRAY_SIZE];
   int i;
   int maxNum;

   for (i = 0; i < ARRAY_SIZE; ++i) {
     cin >> userArray[i];
   }
   
   maxNum = userArray[0];
   
   for (i = 0; i < ARRAY_SIZE; ++i) {
     if (maxNum < userArray[i])
         maxNum = userArray[i];
   }
   
   cout << maxNum << endl;
   

   return 0;
}
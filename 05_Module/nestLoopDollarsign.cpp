#include <iostream>
using namespace std;

int main() {
   int firstVal;
	int secondVal;
   int i;
   int j;

   cin >> firstVal;
   cin >> secondVal;
   
   for (int i = firstVal; i <= secondVal; ++i) {
        cout << string(i, '$') << endl;
    }
   
   return 0;
}
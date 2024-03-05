#include <iostream>
using namespace std;

void  CoordTransform(int xVal, int yVal, int& xValNew, int& yValNew) {
	xValNew = (xVal + 1) * 2;
	yValNew = (yVal + 1) * 2;
   }

int main() {
   int xValNew;
   int yValNew;
   int xValUser;
   int yValUser;

   cin >> xValUser;
   cin >> yValUser;

   CoordTransform(xValUser, yValUser, xValNew, yValNew);
   cout << "(" << xValUser << ", " << yValUser << ") becomes (" << xValNew << ", " << yValNew << ")" << endl;

   return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int VALS_SIZE = 6;
   vector<int> valsVctr(VALS_SIZE);
   unsigned int i;
   int sumVal;
   int avgVal;

   valsVctr.at(0) = 30;
   valsVctr.at(1) = 20;
   valsVctr.at(2) = 20;
   valsVctr.at(3) = 15;
   valsVctr.at(4) = 5;
   valsVctr.at(5) = 10;

   sumVal = 0;
   avgVal = 0;
   
   
   for(i = 0; i < valsVctr.size(); ++i) {
      sumVal += valsVctr.at(i);
      }

   avgVal = sumVal / VALS_SIZE;

   cout << "Avg: " << avgVal << endl;

   return 0;
}

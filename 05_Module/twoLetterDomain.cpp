#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char letter1;
   int letter2;
   
   cout << "Two-letter domain names:" << endl;
   
   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 0;
      while (letter2 <= 9) {
         cout << letter1 << letter2 << ".com" << endl;
         ++letter2;
      }
      ++letter1;
   }
   
   return 0;
}
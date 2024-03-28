/* Integer inputSize is read from input. The remaining input alternates between integers and strings. Declare integer vector idList and string vector userList, each with inputSize elements. Then, read and store all the integers into idList and all the strings into userList.

Ex: If the input is:

4
92 Zoe 12 Ada 54 Eli 59 Del
Then the output is:

Id: 92, User: Zoe
Id: 12, User: Ada
Id: 54, User: Eli
Id: 59, User: Del */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int inputSize;
   unsigned int i;
   
   cin >> inputSize;

   vector<int> idList(inputSize);
   vector<string> userList(inputSize);
   
   for (i = 0; i < idList.size(); ++i) {
      cin >> idList.at(i);
      cin >> userList.at(i);
   }
   
   for (i = 0; i < idList.size(); ++i) {
      cout << "Id: " << idList.at(i) << ", ";
      cout << "User: " << userList.at(i) << endl;
   }
    
   return 0;
}

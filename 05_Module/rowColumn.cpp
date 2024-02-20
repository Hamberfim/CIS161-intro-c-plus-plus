#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentRowInteger;
   int currentColumn;
   char currentColumnLetter;
   
   numRows = 5;
   numColumns = 0;
  
    for(currentRow = 1; currentRow <= numRows; currentRow++) 
    { 
        for(currentColumn = 1; currentColumn <= numColumns; currentColumn++) 
        { 
            currentColumnLetter = 'A' + currentColumn - 1;
            cout << currentRow << currentColumnLetter << " ";
        } 
        cout << endl;
    } 
 
   return 0;
}
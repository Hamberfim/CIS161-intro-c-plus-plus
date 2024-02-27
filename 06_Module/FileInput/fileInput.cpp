/* Name: File Input
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * This program asks a user to input a file name and then reads the file and
 * produces output. The file has the following format:
 *      Kim 8 10 6 4
 *      Ivan 9 2 7 8
 *      Sue 7 8 9 10
 *      Kevin 4 6 5 7
 * The output should be each name followed by the average score.
 * For example:
 *      Kim: 7.00
 *      Ivan: 6.00
 *      Sue: 8.50
 *      Kevin: 5.55
 */
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
  // variables
  ifstream inFS;
  string fileName;
  string name;
  int num1, num2, num3, num4;
  double average;

  // user input
  cout << "Enter the file name you want to open: " << endl;
  cin >> fileName;
  cout << "Attempting to open file " << fileName << endl;

  inFS.open(fileName);
  if (!inFS.is_open()) {
    cout << "ERROR! " << fileName << " could not be opened. Exiting Program!"
         << endl;
    return 1; // indicating error
  }

  // using inFS like cin
  cout << "\nReading names and scores." << endl;
  cout << setfill('=') << setw(25) << "" << endl;
  while (!inFS.eof()) {
    // read
    inFS >> name;
    inFS >> num1;
    inFS >> num2;
    inFS >> num3;
    inFS >> num4;

    if (!inFS.fail()) {
      cout << fixed << setprecision(2);
      // display
      cout << name << ": " << (average = (num1 + num2 + num3 + num4) / 4)
           << endl;
    }
  }
  cout << "\n" << endl;

  return 0;
}
/* Name: Return Value Function
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * This program creates a function called averageFourTemperatures that accepts 4
 * integers in the parameter list, returns the average. Instructions: In the
 * main function prompt the user for 4 temperatures accepting them in separate
 * appropriately named variables. Call the averageFourTemperatures function,
 * passing values and printing the returned average to the console.
 */
#include <iostream>
using namespace std;

// function to average temperatures
double averageFourTemperatures(double temp1, double temp2, double temp3,
                               double temp4) {
  // returned the average
  return (temp1 + temp2 + temp3 + temp4) / 4;
}

int main(void) {
  /* Assuming negative number - would require signed int
   * how do you validate a signed int (negative num) */
  // temperature variables - isdigit() only works with unsigned int 0-9 not
  // i.e., 88 or -5
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double avg;

  cout << "=== Find the Average of Four Temperatures ===" << endl;
  // prompt the user for 4 temperatures, accepting them in separate
  // appropriately named variables
  cout << "Enter your first temperature: " << endl;
  cin >> temp1;

  // attempting a different validation
  if (cin.fail()) {
    // user didn't input a number
    cin.clear(); // reset failbit
    cout << "Error: Temperature input must be valid whole numbers! Exiting "
            "Program"
         << endl;
    return -1;
  }

  cout << "Enter your second temperature: " << endl;
  cin >> temp2;
  if (cin.fail()) {
    // user didn't input a number
    cin.clear(); // reset failbit
    cout << "Error: Temperature input must be valid whole numbers! Exiting "
            "Program"
         << endl;
    return -1;
  }

  cout << "Enter your third temperature: " << endl;
  cin >> temp3;
  if (cin.fail()) {
    // user didn't input a number
    cin.clear(); // reset failbit
    cout << "Error: Temperature input must be valid whole numbers! Exiting "
            "Program"
         << endl;
    return -1;
  }

  cout << "Enter your forth temperature: " << endl;
  cin >> temp4;
  if (cin.fail()) {
    // user didn't input a number
    cin.clear(); // reset failbit
    cout << "Error: Temperature input must be valid whole numbers! Exiting "
            "Program"
         << endl;
    return -1;
  }

  // Call the averageFourTemperatures function, passing values and printing the
  // returned average to the console.
  avg = averageFourTemperatures(temp1, temp2, temp3, temp4);

  cout << "The average of " << temp1 << ", " << temp2 << ", " << temp3
       << ", and " << temp4 << " is: " << avg << " degrees." << endl;

  return 0;
}

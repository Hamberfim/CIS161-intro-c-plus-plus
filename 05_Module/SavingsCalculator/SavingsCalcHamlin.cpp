/* Name: Savings Calculator
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Industrial Motors, Inc. wants a report that shows its employees
 * the benefits of saving for retirement.
 * Design an application that inputs employees' names, saving rate and salaries
 * and outputs the predicted account value for 10 years.
 * The predicted account value for a year is:
 *      (previous year account value + savings rate * salary) * 1.08
 * The application should continue to input and display employee information
 * until the user enters an employee name "q".
 * Here is an example of the application in use.
 *      Enter name (q to quit): Bob
 *      Enter savings rate: 0.05
 *      Enter salary: 50000
 *      The account values for Bob are:
 *      2700
 *      5616
 *      8765.28
 *      12166.50
 *      Enter name (q to quit): q
 *      bye
 */
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // string name;
  double savingsRate = 0.05;
  double salary = 50000;
  double accountValue;

  //   cout << "Enter name (q to quit): " << endl;

  //   cout << "Enter savings rate: " << endl;

  //   cout << "Enter salary: " << endl;

  //   cout << "The account values for " << name << " are: " << endl;

  // test calculation
  accountValue = (savingsRate * salary) * 1.08;
  cout << accountValue << endl;
  accountValue = (accountValue + savingsRate * salary) * 1.08;
  cout << accountValue << endl;
  accountValue = (accountValue + savingsRate * salary) * 1.08;
  cout << accountValue << endl;
  accountValue = (accountValue + savingsRate * salary) * 1.08;
  cout << accountValue << endl;
  return 0;
}
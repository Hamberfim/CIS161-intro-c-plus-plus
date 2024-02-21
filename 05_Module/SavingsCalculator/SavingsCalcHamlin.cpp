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
 *      ...
 *      Enter name (q to quit): q
 *      bye
 */
#include <iomanip> // std::setprecision
#include <iostream>
using namespace std;

int main(void) {
  string name;
  double savingsRate;
  double salary;
  double accountValue;

  // loop control
  bool again = true;

  cout << "Enter name (q to quit): " << endl;
  cin >> name;
  do {
    // check for quit and validate numeric input
    if (name == "q" || name == "Q") {
      break;
    } else {
      cout << "Enter savings rate (0.xx i.e., 0.04): " << endl;
      cin >> savingsRate;
      // Not the scope of this assignemtn but...
      // FIX LATER: how to validate if user inputs alpha chars
      // validate, check for zero value |
      while (savingsRate <= 0) {
        cout << "Savings rate must be greater than zero, enter savings rate "
                "(0.xx i.e., 0.04): "
             << endl;
        cin >> savingsRate;
      };

      cout << "Enter salary: " << endl;
      cin >> salary;
      // validate, check for zero value
      while (salary <= 0) {
        cout << "Salary must be greater than zero, enter salary: " << endl;
        cin >> salary;
      };

      cout << "\n=========================" << endl;
      cout << "The account values for " << name << " are: " << endl;

      // Ten Year Calculations
      accountValue = (savingsRate * salary) * 1.08; // initial value- year 1
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 2
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 3
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 4
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 5
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 6
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 7
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 8
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 9
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
      accountValue = (accountValue + savingsRate * salary) * 1.08; // year 10
      cout << fixed << setprecision(2) << "$" << accountValue << endl;
    }
    cout << "\nEnter name (q to quit): " << endl;
    cin >> name;
    // check for quit
    if (name == "q" || name == "Q") {
      again = false;
    }
  } while (again);

  cout << "bye" << endl;
  return 0;
}
/* Name: Formatting Output - compounded interest
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Write a program that repeatedly asks for the principal, the interest rate
 * (Rate), and the number of times (T) the interest is compounded and outputs
 * the amount in savings.
 * Use the following formula:
 * Amount in Savings = Principal * (1 + Rate/T)*T
 *   need #include < math.h >, SavingsAmount = Principal * pow((1+rate/t), t);
 *   pow(base, exponent);
 * Also note that rate is input as a percent, but the formula assumes it is
 * between 0 and 1, so divide the percent by 100.
 * IMPORTANT: The purpose of this problem is output formatting. Not following
 * the formatting shown will not receive full credit. Hard coding the formatting
 * so that it only works for particular inputs will not receive full credit.
 * The output need to be in this format:
 *      Enter principal: 1000
 *      Enter interest rate (as percent): 4.25
 *      Enter number of times compounded: 12
 *
 *      Interest Rate:           4.25%
 *      Times Compounded:           12
 *      Principal:         $   1000.00
 *      Amount in Savings: $   1043.34
 */
#include <cctype>
#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
  // variables
  double principal;
  double interestRate;
  int timesCompounded;
  double inSavings;

  // loop control
  bool again = true;

  // TO FIX: How to validate so an alpha can't be used.
  // initial prompt into loop
  cout << "Enter principal: (or -1 to quit)" << endl;
  cin >> principal;
  do {
    // capture user input
    if (principal == -1) {
      break;
    } else {
      while (principal <= 0) {
        cout << "Principal be a number greater than zero, enter principal: "
             << endl;
        cin >> principal;
      }

      cout << "Enter interest rate (as percent): " << endl;
      cin >> interestRate;
      while (interestRate <= 0) {
        cout << "Interest rate must be a number greater than zero, enter "
                "interest rate "
                "(as "
                "percent): "
             << endl;
        cin >> interestRate;
      }

      cout << "Enter number of times compounded: " << endl;
      cin >> timesCompounded;
      while (timesCompounded < 1) {
        cout << "Number of compound times must be a number greater than zero, "
                "enter "
                "number of times compounded: "
             << endl;
        cin >> timesCompounded;
      }

      // calculation
      inSavings = principal * pow((1 + (interestRate / 100) / timesCompounded),
                                  timesCompounded);
      // space in output
      cout << endl;

      // output/display
      cout << fixed << setprecision(2) << right;

      cout << setw(20) << left << "Interest Rate: ";
      cout << setw(9) << right << interestRate << "%" << endl;

      cout << setw(20) << left << "Times Compounded: ";
      cout << setw(10) << right << timesCompounded << endl;

      cout << setw(20) << left << "Principal:         $";
      cout << setw(10) << right << principal << endl;

      cout << setw(20) << left << "Amount in Savings: $";
      cout << setw(10) << right << inSavings << endl;
    }
    cout << "\nEnter principal: (or -1 to quit)" << endl;
    cin >> principal;
    // check for quit
    if (principal == -1) {
      again = false;
    }
  } while (again);

  cout << "Exiting, bye." << endl;

  return 0;
}
/* Name: Monkey Business
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * A local zoo wants to keep track of how many pounds of food each of its three
 * monkeys eats each day during a typical week. Write a program that stores this
 * information in a two-dimensional 3 × 5 array, where each row represents a
 * different monkey, and each column represents a different day of the week.
 *
 *  says 3x5 array but also say eats each week (that would be a 3x7 array)
 *     C1     C2      C3
 *  |  M1  |  M2   |  M3  |
 *  -----------------------
 *  |[0][0]||[0][1]|[0][2]| ROW-0
 *  -----------------------
 *  |[1][0]||[1][1]|[1][2]| ROW-1
 *  -----------------------
 *  |[2][0]||[2][1]|[2][2]| ROW-2
 *  -----------------------
 *  |[3][0]||[3][1]|[3][2]| ROW-3
 *  -----------------------
 *  |[4][0]||[4][1]|[4][2]| ROW-4
 *  -----------------------
 *  |[5][0]||[5][1]|[5][2]| ROW-5
 *  -----------------------
 *  |[6][0]||[6][1]|[6][2]| ROW-6
 *  -----------------------
 *
 * The program should first have the user input the data for each monkey.
 * Then, it should create a report that includes the following information:
 *
 *      Average amount of food eaten per day by the whole family of monkeys.
 *      The least amount of food eaten during the week by any one monkey.
 *      The greatest amount of food eaten during the week by any one monkey.
 *
 * Write functions:
 *      average()
 *      least()
 *      greatest()
 *      main()
 */
#include <iomanip>
#include <iostream>
#include <limits>

// specificity of namespace declarations
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::numeric_limits;
using std::setprecision;
using std::streamsize;

// functions
// average amount eaten by all
double AverageAmount() {}

// least amount eaten by one
double LeastAmount() {}

// greatest amount eaten by one
double GreatestAmount() {}

int main(void) {
  // vars
  const int MONKEY_COUNT = 3;
  const int DAY_COUNT = 7;

  double averageFoodEatenByAll;
  double leastFoodEatenByOne;
  double mostFoodEatenByOne;
  double foodAmount;

  // array table
  double foodArray[MONKEY_COUNT][DAY_COUNT]; // 3 monkeys, 7 days of the week

  // prompt user for data on each monkey
  for (unsigned int i = 0; i < MONKEY_COUNT; i++) {
    cout << "Enter the amount of food for monkey" << i + 1
         << " in pounds: " << endl;
    cin >> foodAmount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (!cin) {
      cerr << "Error! Food amount must be a numeric value (i.e., 2.3)." << endl;
      cin.clear();
      cout << "Enter the amount of food for monkey" << i + 1
           << " in pounds: " << endl;
      cin >> foodAmount;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // populate array input
    for (unsigned int j = 0; j < DAY_COUNT; j++) {
      foodArray[i][j] = foodAmount;
    }
  }

  // display
  // Average amount of food eaten per day by all of monkeys.
  // least amount of food eaten during the week by any one monkey
  // greatest amount of food eaten during the week by any one monkey.

  cout << "=========== Monkey Feeding Data ===========" << endl;

  return 0;
}
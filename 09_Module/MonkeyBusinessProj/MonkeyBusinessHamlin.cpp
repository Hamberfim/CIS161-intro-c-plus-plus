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
 *  |[0][0]||[0][1]|[0][2]| ROW-0 --day 1
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

// global vars
const int MONKEY_COUNT = 3;
const int DAY_COUNT = 7;

// functions
// average amount eaten by all
double AverageAmount(double foodArray[][DAY_COUNT]) {
  double totalFood = 0.0;
  double average;
  int numOfEntries = MONKEY_COUNT * DAY_COUNT;
  for (unsigned int i = 0; i < MONKEY_COUNT; i++) {
    for (unsigned int j = 0; j < DAY_COUNT; j++) {
      totalFood += foodArray[i][j];
    }
  }
  average = totalFood / numOfEntries;
  return average;
}

// // least amount eaten by one
// double LeastAmount() {}

// // greatest amount eaten by one
// double GreatestAmount() {}

int main(void) {
  // vars
  double foodAmount;
  double averageFoodEatenByAll;
  //   double leastFoodEatenByOne;
  //   double mostFoodEatenByOne;

  // array table
  double foodArray[MONKEY_COUNT][DAY_COUNT]; // 3 monkeys, 7 days of the week

  // prompt user for data on each monkey
  for (int i = 0; i < MONKEY_COUNT; ++i) {
    cout << "Enter amount of food in pounds for monkey " << i + 1 << " :"
         << endl;
    for (int j = 0; j < DAY_COUNT; ++j) {
      cout << "Food for Monkey " << i + 1 << ", day " << j + 1 << endl;

      cin >> foodAmount;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      while (cin.fail()) {
        cerr << "ERROR! Input must be a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Food for Monkey " << i + 1 << ", day " << j + 1 << endl;
        cin >> foodAmount;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }

      foodArray[i][j] = foodAmount;
    }
  }

  // gather data
  averageFoodEatenByAll = AverageAmount(foodArray);

  // display
  // Average amount of food eaten per day by all of monkeys.
  // least amount of food eaten during the week by any one monkey
  // greatest amount of food eaten during the week by any one monkey.

  cout << "=========== Monkey Feeding Data ===========" << endl;

  // testing output
  // monkey 1
  cout << foodArray[0][0] << " ";
  cout << foodArray[0][1] << " ";
  cout << foodArray[0][2] << endl;

  cout << foodArray[1][0] << " ";
  cout << foodArray[1][1] << " ";
  cout << foodArray[1][2] << endl;

  cout << foodArray[2][0] << " ";
  cout << foodArray[2][1] << " ";
  cout << foodArray[2][2] << endl;

  return 0;
}
/* Name: Average Temperature: Vector
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Write a program to input temperatures for any number of days
 * and then output to average of the even days.
 *
 * You must:
 *      Create a vector of doubles called temperatures.
 *      Use a loop to
 *          Prompt the user for temperatures.
 *          Add them to the vector.
 *          A way for the user to indicate they want to stop entering
 * temperatures.
 *
 * Use a second loop to find the sum of the temperatures on even
 * index days (the even index temperatures are 0, 2, 4, 6, etc.).
 * Print the average of the even index day temperatures showing only two
 * decimals of precision.
 */
#include <iomanip>
#include <iostream>
#include <limits>
#include <vector>

// specificity of namespace declarations
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::numeric_limits;
using std::setprecision;
using std::streamsize;
using std::vector;

int main(void) {
  int NUM_TEMPS;
  double temperature;
  int idxCount = 0;
  double evenTempSum = 0;

  // Create a vector of doubles called temperatures.
  vector<double> temperatures;

  cout << "How many temperatures do you want to enter?" << endl;
  cin >> NUM_TEMPS;
  while (cin.fail()) {
    cerr << "ERROR! Input must be a number." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "How many temperatures do you want to enter?" << endl;
    cin >> NUM_TEMPS;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  // resize vector of doubles called temperatures.
  temperatures.resize(NUM_TEMPS);

  // Prompt the user for temperatures.
  do {
    cout << "Enter your temperature: " << endl;
    cin >> temperature;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // validate
    while (cin.fail()) {
      cerr << "ERROR! Input must be a number." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Enter your temperature: " << endl;
      cin >> temperature;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    temperatures.at(idxCount) = temperature;
    idxCount++;

  } while (idxCount < NUM_TEMPS);

  // Use a second loop to find the sum of the temperatures on even
  for (unsigned int i = 0; i < temperatures.size(); ++i) {
    evenTempSum += temperatures.at(i);
    i++; // add jump to even number
  }

  // average even index day temperatures to two decimals of precision
  double avg = evenTempSum / (NUM_TEMPS / 2);

  // test
  //   for (auto &&i : temperatures) {
  //     cout << i << endl;
  //   }
  cout << "Even Sum: " << fixed << setprecision(2) << evenTempSum << endl;
  cout << "Even Average: " << fixed << setprecision(2) << avg << endl;

  return 0;
}
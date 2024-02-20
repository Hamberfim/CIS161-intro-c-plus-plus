/* Name: Buggy Guessing Game
 * Author: Provided by instructor for correction - Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * This program is a guessing game were a user guesses a random number between 1
 * and 10. The game has two error, find and fix them. Don't change the intended
 * functionality of the game. For full credit you must do the following:
 *      Fix the errors and submit the working code (only the .cpp file).
 *      Add comments to the code to explain the purpose of any change(s).
 */
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srand(static_cast<uint>(time(nullptr)));
  int secret = rand() % 10 + 1;
  int guess;

  cout << "Guess a number between 1 and 10." << endl;
  cin >> guess;

  // change the zero to 1 to match the requested input range
  while (guess < 1 || guess > 10) {
    cout << "That is not a number between 1 and 10, try again." << endl;

    // prompt user again for correct input
    cout << "Guess a number between 1 and 10." << endl;
    cin >> guess;
  }

  while (guess != secret) {
    if (guess < secret) {
      cout << "Too low, try again." << endl;
      // prompt user again for correct input - otherwise it loops infinitely
      cout << "Guess a number between 1 and 10." << endl;
      cin >> guess;
    } else if (guess > secret) {
      cout << "Too high, try again." << endl;
      // prompt user again for correct input - otherwise it loops infinitely
      cout << "Guess a number between 1 and 10." << endl;
      cin >> guess;
    }
  }
  cout << "Correct!" << endl;

  return 0;
}
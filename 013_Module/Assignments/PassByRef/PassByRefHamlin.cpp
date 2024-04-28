/* Name: Pass by Reference
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Write a function that inputs a person's first and last name. A function can't
 * return two strings, so instead you will need to pass the arguments as
 * pointers or by reference. Call the function and output the first and last
 * name in main.
 *
 * I'm assuming by reference since thats the name of the assignment :)
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// validate names
bool isValidNameString(const string &str) {
  for (char c : str) {
    if (isdigit(c)) {
      return true;
    }
  }
  return false;
}

// function that inputs a person's first and last name
// input arguments are passed by reference
void inputName(string &firstName, string &lastName) {
  do {
    cout << "Please enter your first name: ";
    cin >> firstName;
    // call vaidation function
    if (isValidNameString(firstName)) {
      cout << "First name cannot contain numbers. Please try again." << endl;
    }
  } while (isValidNameString(firstName));

  do {
    cout << "Please enter your last name: ";
    cin >> lastName;
    if (isValidNameString(lastName)) {
      cout << "Last name cannot contain numbers. Please try again." << endl;
    }
  } while (isValidNameString(lastName));
}

int main(void) {
  string firstName;
  string lastName;

  // call the function for input
  inputName(firstName, lastName);

  // output the first and last name
  cout << "Hello, " << firstName << " " << lastName << ". Welcome to the party."
       << endl;

  return 0;
}
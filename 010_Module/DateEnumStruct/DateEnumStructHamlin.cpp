/* Name: DateEnumStruct (Date using Enum and Struct)
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description: Create a program with the following.
 * Define an enum called DayOfWeek for the days of the week:
 *      SUNDAY,
 *      MONDAY,
 *      TUESDAY, etc.
 * Define a struct called Date that has the following fields:
 *      dayOfWeek,
 *      dayOfMonth,
 *      month,
 *      year
 * Create an object from the Date struct.
 * Set its fields with user input and output a date like this:
 *      "Tuesday, 6/11/2020".
 * You may want to write a helper function to convert the enum DayOfWeek into a
 * string. Review Announcements for code example Hint: For input, you can
 * convert an int into an enum with static_cast:
 *      DayOfWeek day;
 *      int dayNumber;
 *      cin >> dayNumber;
 *      day = static_cast<DayOfWeek>(dayNumber);
 */
#include <iostream>
#include <limits>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;

// Define an enum called DayOfWeek
enum DayOfWeek {
  SUNDAY = 1,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

// Define a struct called Date
struct Date {
  DayOfWeek dayOfWeek;
  int dayOfMonth;
  int month;
  int year;
};

string convertDayToString(int dayNumber) {
  // return string name
  switch (dayNumber) {
  case 1:
    return "Sunday";
    break;

  case 2:
    return "Monday";
    break;

  case 3:
    return "Tuesday";
    break;

  case 4:
    return "Wednesday";
    break;

  case 5:
    return "Thursday";
    break;

  case 6:
    return "Friday";
    break;

  case 7:
    return "Saturday";
    break;

  default:
    return "unknown";
    break;
  }
}

// user input for day of week
int getUserDay() {
  bool notValid = true;
  int dayNumber;

  while (notValid) {
    cout << "Enter a number for the day of the week 1-7 (i.e., Sun=1): "
         << endl;
    cin >> dayNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cin.fail()) {
      cerr << "Error! Input must be a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    } else if (dayNumber <= 0 || dayNumber > 7) {
      cout << "Error! Input must be a between 1-7" << endl;
      continue;
    } else {
      notValid = false;
    }
  }

  return dayNumber;
}

// user input for day of month
int getUserDayOfMonth() {
  bool notValid = true;
  int dayMonthNumber;

  while (notValid) {
    cout << "Enter a number for the day of the month 1-31: " << endl;
    cin >> dayMonthNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cin.fail()) {
      cerr << "Error! Input must be a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    } else if (dayMonthNumber <= 0 || dayMonthNumber > 31) {
      cout << "Error! Input must be a between 1-31" << endl;
      continue;
    } else {
      notValid = false;
    }
  }

  return dayMonthNumber;
}

// get user input for month
int getUserMonth() {
  int monthNumber;
  bool notValid = true;

  while (notValid) {
    cout << "Enter a number for the month 1-12: " << endl;
    cin >> monthNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cin.fail()) {
      cerr << "Error! Input must be a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    } else if (monthNumber <= 0 || monthNumber > 12) {
      cout << "Error! Input must be a between 1-12" << endl;
      continue;
    } else {
      notValid = false;
    }
  }

  return monthNumber;
}

// get user input for year
int getUserYear() {
  int yearNumber;
  bool notValid = true;

  while (notValid) {
    cout << "Enter a year: " << endl;
    cin >> yearNumber;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cin.fail()) {
      cerr << "Error! Input must be a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    } else if (yearNumber <= 1900 || yearNumber > 9999) {
      cout << "Error! Input must be a between 1900-9999" << endl;
      continue;
    } else {
      notValid = false;
    }
  }

  return yearNumber;
}

int main(void) {
  // Create an object from the Date struct.
  Date userDate;

  // get user input for day number of week
  int dayNumber = getUserDay();
  userDate.dayOfWeek = static_cast<DayOfWeek>(dayNumber);
  // convert day number to string
  string dayStr = convertDayToString(userDate.dayOfWeek);

  // get user input for day of month
  int dayMonthNumber = getUserDayOfMonth();
  userDate.dayOfMonth = dayMonthNumber;

  // get user input for month
  int monthNumber = getUserMonth();
  userDate.month = monthNumber;

  // get user input for year
  int yearNumber = getUserYear();
  userDate.year = yearNumber;

  /* Set its fields with user input and output a date like this:
   *      "Tuesday, 6/11/2020".*/
  cout << '\n'
       << dayStr << ", " << userDate.month << "/" << userDate.dayOfMonth << "/"
       << userDate.year << '\n'
       << endl;

  return 0;
}

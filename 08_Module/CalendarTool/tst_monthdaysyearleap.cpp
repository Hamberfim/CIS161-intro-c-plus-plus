/* Name: Calendar Tool with Automated Testing
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Repeatedly prompt a user to enter a year and month. 
 * Output to the user the number of days in that month
 * and determining if the entered year is a leap year.
 * 
 * You must break up the problem into functions, 
 * one function to take user input, 
 * one function to determine if a users input is valid, 
 * one function to calculate the number of days in a month
 * one function to determine if the year is a leap year. 
 * There should be very little code in main, all main does is call the function to take the users input.
 * !! Every function, except for ones that require user input, must be fully tested with one or more automated test functions. !!
 * 
 * Determining a Leap Year: If the year is evenly divisible by 4, by 400, but not by 100, it's a leap year.
 *  January - 31 days, February - 28 days in a common year and 29 days in leap years
 *  March - 31 days, April - 30 days, May - 31 days, June - 30 days, July - 31 days
 *  August - 31 days, September - 30 days, October - 31 days, November - 30 days, December - 31 days
 */

// preprocessors
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

// DECLARE AND INITIALIZED VARIABLES
int year, month, days;
string months[] = {"January",
                   "Febuary",
                   "March",
                   "April",
                   "May",
                   "June",
                   "July",
                   "August",
                   "September",
                   "October",
                   "November",
                   "December"};
void init()
{
    // set month/year/day int values
    month = 0;
    year = 0;
    days = 0;
}

// FUNCTIONS TO TEST WRITTEN BY PROGRAMER
/* one function to take user input - 
 * Seems odd to require this. Isn't this where you would mock for input for the other four test?
 * Plus there doesn't seem to be console access for input during a test run, though there is during debug with some test showing in console */
int GetYear()
{
    cout << "===== Determine if a Year is a Leap Year =====" << endl;
    cout << "===== and how many Days in a Month =====" << endl;
    cout << "Enter a year (1582 - 9999): " << endl;
    cin >> year;
    while (!cin) {
        cerr << "Error! Invalid input. Try again." << endl;
        cin.clear();
        cin.ignore();
        cout << "Enter a year (1582 - 9999): " << endl;
        cin >> year;
    }

    return year;
}

int GetMonth()
{
    cout << "Enter a month as a numeric value (Jan.= 1, Feb.= 2, i.e., 1-12) :" << endl;
    cin >> month;
    while (!cin) {
        cerr << "Error! Invalid input. Try again." << endl;
        cin.clear();
        cin.ignore();
        cout << "Enter a month as a numeric value (Jan.= 1, Feb.= 2, i.e., 1-12) :" << endl;
        cin >> month;
    }

    return month;
}

// one function to determine if a users input is valid
bool validate_user_input(int year, int month)
{
    bool isValid = false;
    // assuming the stating year of the Gregorian calendar (1582)
    if ((year >= 1582 && year < 10000) && (month > 0 && month < 13)) {
        isValid = true;
    }

    return isValid;
}

// one function to determine if the year is a leap year.
bool is_leap_year(int year)
{
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

// one function to calculate the number of days in a month
int number_of_day_in_month(int month, int year)
{
    bool isleap;

    if (month == 1) {
        days = 31;
    } else if (month == 2) {
        isleap = is_leap_year(year);
        if (isleap) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 3) {
        days = 31;
    } else if (month == 4) {
        days = 30;
    } else if (month == 5) {
        days = 31;
    } else if (month == 6) {
        days = 30;
    } else if (month == 7) {
        days = 31;
    } else if (month == 8) {
        days = 31;
    } else if (month == 9) {
        days = 20;
    } else if (month == 10) {
        days = 31;
    } else if (month == 11) {
        days = 30;
    } else if (month == 12) {
        days = 31;
    }

    return days;
}

// TDD TEST FRAMEWORK SECTION STARTS
#include <QtTest>

// add necessary includes here

class MonthDaysYearLeap : public QObject
{
    Q_OBJECT

public:
    MonthDaysYearLeap();
    ~MonthDaysYearLeap();

    // DECLARE TEST FUNCTION PROTOTYPES HERE
private slots:
    void test_validate_user_input();
    void test_is_leap_year();
    void test_number_of_day_in_month();
};

MonthDaysYearLeap::MonthDaysYearLeap() {}

MonthDaysYearLeap::~MonthDaysYearLeap() {}

// TDD TEST WRITTEN BY PROGRAMER
void MonthDaysYearLeap::test_validate_user_input()
{
    // initialize vars
    init();
    bool validity;

    // TRUE
    // normally call user input function calls
    year = 1966; // mocked for TRUE
    month = 4;   // mocked for TRUE
    validity = validate_user_input(year, month);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, true);

    // TRUE/FALSE
    year = 1966; // mocked for TRUE
    month = 18;  // mocked for FALSE
    validity = validate_user_input(year, month);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, false);
    // FALSE/TRUE
    year = 11000; // mocked for FALSE
    month = 10;   // mocked for TRUE
    validity = validate_user_input(year, month);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, false);
    // FALSE/FLASE
    year = 11000; // mocked for FALSE
    month = -1;   // mocked for FALSE
    validity = validate_user_input(year, month);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, false);
}

void MonthDaysYearLeap::test_is_leap_year()
{
    // initialize vars
    init();
    bool validity;

    // TRUE
    // normally function calls
    year = 2012; // mocked for TRUE
    validity = is_leap_year(year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, true);

    // FALSE
    // normally  function calls
    year = 1900; // mocked for FALSE
    validity = is_leap_year(year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(validity, false);
}

void MonthDaysYearLeap::test_number_of_day_in_month()
{
    // assumption is that since user input is validated first, all variable values are good/true or return zero
    // initialize vars
    init();
    // mock for April
    month = 4;
    year = 0;
    days = number_of_day_in_month(month, year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(days, 30);

    // mock for feb not a leap year
    month = 2;
    year = 1900; // only call on feb
    days = number_of_day_in_month(month, year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(days, 28);

    // mock for feb on leap year
    month = 2;
    year = 2024; // only call on feb
    days = number_of_day_in_month(month, year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(days, 29);

    // mock for no match
    month = 13;
    year = 0;
    days = number_of_day_in_month(month, year);
    // QCOMPARE(actual, expected;)
    QCOMPARE(days, 0);
}

// TDD TEST FRAMEWORK's MAIN()
QTEST_APPLESS_MAIN(MonthDaysYearLeap)

// ACTUAL main() APPLICATION CODE
// comment out QTEST_APPLESS_MAIN(BankTest) to run application rather than tests, change notmain() to main()
int notmain()
{
    bool isLeap;
    // call for input
    year = GetYear();
    month = GetMonth();

    // is year a leap year
    isLeap = is_leap_year(year);

    // // how many days in the month
    days = number_of_day_in_month(month, year);

    string leap = (isLeap) ? " TRUE" : " FALSE";

    // // display
    cout << "Is the year " << year << " a leap year?" << leap << "...and " << months[month - 1]
         << " of that years has " << days << " days." << endl;

    return 0;
}

#include "tst_monthdaysyearleap.moc"

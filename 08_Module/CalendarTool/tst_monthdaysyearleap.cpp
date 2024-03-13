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

// DECLARE AND INITIALIZED VARIABLES
int year, january, febuary, march, april, may, june, july, august, september, october, november,
    december;
void init()
{
    // set year day values
    year = 0;
    january = 31;
    febuary = 28; // add one day on leap year
    march = 31;
    april = 30;
    may = 31;
    june = 30;
    july = 31;
    august = 31;
    september = 30;
    october = 31;
    november = 30;
    december = 31;
}

// user function to prompt for year and month

// FUNCTIONS TO TEST WRITTEN BY PROGRAMER

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
    void test_case1();
};

MonthDaysYearLeap::MonthDaysYearLeap() {}

MonthDaysYearLeap::~MonthDaysYearLeap() {}

// TDD TEST WRITTEN BY PROGRAMER
void MonthDaysYearLeap::test_case1() {}

// TDD TEST FRAMEWORK's MAIN()
QTEST_APPLESS_MAIN(MonthDaysYearLeap)

// ACTUAL main() APPLICATION CODE
// comment out QTEST_APPLESS_MAIN(BankTest) to run application rather than tests, change notmain() to main()
int notmain()
{
    // will call the tested function from here
    return 0;
}

#include "tst_monthdaysyearleap.moc"

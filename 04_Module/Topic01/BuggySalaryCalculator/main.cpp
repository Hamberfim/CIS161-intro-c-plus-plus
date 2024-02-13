/* Name: Buggy Salary Calculator
 * Author: Provided by instructor for correction - Anthony Hamlin 
 * CIS161 - 20447
 * The purpose of the program is to tell the user that the weekly salary is in one of three ranges, 
 * less than 200, between 200 and 800 and greater than 800. 
 * Test the program thoroughly, and fix any unexpected behavior. 
 * 
 * For full credit you must do the following:
 *      Fix the error and submit the working code (only the .cpp file).
 *      Add comments to the code to explain the purpose of any change(s).
*/
#include <iostream>
using namespace std;

int main(void) // void added since no parameter arguments are passed to main
{
    const int MAX_HOURS_IN_WEEK = 168; // who can work for 24 hours 7 days a week?
    const int MAX_WAGE = 100;
    const int LOWER_SALARY = 200;
    const int UPPER_SALARY = 800;

    // int changed to double for decimal math because of int truncation
    double hourlyWage;
    double workHoursPerWeek;
    double weeklySalary;

    cout << "How many hours do you work per week?" << endl;
    cin >> workHoursPerWeek;
    // explicitly catching inclusive range of zero and using 'OR' in the conditional
    if (workHoursPerWeek <= 0 || workHoursPerWeek > MAX_HOURS_IN_WEEK) {
        cout << "Invalid number of hours per week." << endl;
        return -1;
    }

    cout << "What is your hourly wage?" << endl;
    cin >> hourlyWage;

    if (hourlyWage > MAX_WAGE) {
        cout << "An hourly wage greater than 100 requires executive approval." << endl;
        return -1; // exiting since approval is required

        // explicitly catching inclusive zero range
    } else if (hourlyWage <= 0) {
        cout << "Invalid hourly wage." << endl;
        return -1;
    }

    weeklySalary = hourlyWage * workHoursPerWeek;

    // explicitly catching ranges
    if (weeklySalary > 0 && weeklySalary < LOWER_SALARY) {
        cout << "The weekly salary is less than 200." << endl;
    }
    // adding 'else if' and explicitly catching range inclusively
    else if (weeklySalary >= LOWER_SALARY && weeklySalary <= UPPER_SALARY) {
        cout << "The weekly salary is between 200 and 800." << endl;
    } else {
        cout << "The weekly salary is greater than 800." << endl;
    }

    return 0;
}

/* Name: Salary Computation
 * Author: Anthony Hamlin for correction
 * CIS161 - 20447
 * Description:
 * This program Salary Computation was provide by the instrctor for corection.
 * 
 * Interaction Example:
 *      How many hours do you work per week?
 *      40
 *      What is your hourly wage?
 *      10.5
 *      Weekly salary is: 400  <- ERROR 40 * 10.5 is not 400
 *      Annual salary is: 20000
 *      
 * Instructions - Find the mistakes in the code and fix them. 
 * For full credit you must do the following: 
 *      Fix the error and submit the working code (only the .cpp file).
 *      Add comments to the code to explain the purpose of any change(s).
 *      The code contains a "magic number", replace it with a constant.   
 */

#include <iostream>
using namespace std;

int main(void)
{
    // changed data-types from int to double for decimal input and calculations
    double hourlyWage;
    double workHoursPerWeek;
    double weeklySalary;
    double annualSalary;

    // replace magic number with a constant
    const int WEEKS_WORKED_IN_A_YEAR = 50;

    cout << "How many hours do you work per week?" << endl;
    cin >> workHoursPerWeek;

    cout << "What is your hourly wage?" << endl;
    cin >> hourlyWage;

    weeklySalary = hourlyWage * workHoursPerWeek;
    cout << "Weekly salary is: ";
    cout << weeklySalary << endl;

    // replace magic number with a constant
    annualSalary = weeklySalary * WEEKS_WORKED_IN_A_YEAR;
    cout << "Annual salary is: ";
    cout << annualSalary << endl;

    return 0;
}

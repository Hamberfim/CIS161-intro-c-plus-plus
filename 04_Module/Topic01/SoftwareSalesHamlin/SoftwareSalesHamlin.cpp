/* Name: Software Sales 
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 *  This program propmpts the user for the number of units sold and computes the total cost of the purchase with quantity discounts.
 *      Quantity    Discount
 *      10–19       20%
 *      20–49       30%
 *      50–99       40%
 *      100 or more	50%
 *  Instructions:
 *  Write a program that asks for the number of units sold and computes the total cost of the purchase.
 *  Be efficient! Points will be deducted for a program that requires more test (e.g., if statements) than necessary to be executed.
 *  Now that you know how to validate input we will add input validation to the requirements for all code in this class. 
 *  Here is the complete list of requirements for code:
 *      Good style: Use good naming conventions. Use constants, not magic numbers.
 *      Usability: Always prompt the user for input so they know what to do and provide meaningful output messages.
 *      Input Validation: The program should not accept invalid input. In this case end the program early if the user enters a negative quantity. 
 *              We will learn better ways of dealing with invalid input in the next module.
 *      Documentation: Add a comments that document what each part of your code does.
 *      Testing: Don't submit your solution until you have tested it. The code must compile, execute and produce the correct output for any input.
 *  Submit only the .cpp file containing the code, call it SoftwareSalesLastName.cpp.
 */
#include <iomanip>  // std::setprecision
#include <iostream> // std::cout, std::fixed
using namespace std;

int main(void)
{
    // unit price
    const double UNIT_PRICE = 99.00;

    // discount constants
    const double DISCOUNT_20 = 0.20;
    const double DISCOUNT_30 = 0.30;
    const double DISCOUNT_40 = 0.40;
    const double DISCOUNT_50 = 0.50;

    // quanity discount range constants
    const int LOWEST_COUNT20 = 10;
    const int LOWEST_COUNT30 = 20;
    const int LOWEST_COUNT40 = 50;
    const int HIGHEST_COUNT50 = 100;

    // user input value & vars for calculations
    int unitsSold = 0;
    double total = 0;
    double discount = 0;
    double totalWithDiscount = 0;

    // get number of units sold
    cout << "Enter how many units are being sold? " << endl;
    cin >> unitsSold;

    // validate input
    if (unitsSold <= 0) {
        cout << "Error! Invalid Quantity Input. Exiting Program." << endl;
        return -1;
    }

    // calculate discount and totals  -- this could be extract from main to a function call with parameters
    if (unitsSold < LOWEST_COUNT20) {
        total = (UNIT_PRICE * unitsSold);
        totalWithDiscount = total;
    } else if (unitsSold >= LOWEST_COUNT20 && unitsSold < LOWEST_COUNT30) {
        total = (UNIT_PRICE * unitsSold);
        discount = (UNIT_PRICE * unitsSold) * DISCOUNT_20;
        totalWithDiscount = total - discount;
    } else if (unitsSold >= LOWEST_COUNT30 && unitsSold < LOWEST_COUNT40) {
        total = (UNIT_PRICE * unitsSold);
        discount = (UNIT_PRICE * unitsSold) * DISCOUNT_30;
        totalWithDiscount = total - discount;
    } else if (unitsSold >= LOWEST_COUNT40 && unitsSold < HIGHEST_COUNT50) {
        total = (UNIT_PRICE * unitsSold);
        discount = (UNIT_PRICE * unitsSold) * DISCOUNT_40;
        totalWithDiscount = total - discount;
    } else if (unitsSold >= HIGHEST_COUNT50) {
        total = (UNIT_PRICE * unitsSold);
        discount = (UNIT_PRICE * unitsSold) * DISCOUNT_50;
        totalWithDiscount = total - discount;
    }

    // output total cost of purchase minus discount
    cout << "=======================" << endl;
    cout << "Units: " << unitsSold << endl;
    cout << "Price Per Unit: $" << fixed << setprecision(2) << UNIT_PRICE << endl;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;
    cout << "Discount: $" << fixed << setprecision(2) << discount << endl;
    cout << "-----------------------" << endl;
    cout << "Final Bill: $" << fixed << setprecision(2) << totalWithDiscount << endl;

    return 0;
}

/* Name: Currency Convertor
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * This program prompts the user for amount in Euros, Pesos, and Yen 
 * then converts each to US dollar amounts and then adds up the total value for out put.
 * 
 * Interaction Example:
 *      How many Euros do you have?
 *      245.59
 *      How many Mexican Pesos do you have?
 *      4678
 *      How many Chinese Yen do you have? <-- ERROR?? the Yen(JPY) is Japanese currency, China's currency is the Yuan(CNY)
 *      5432
 *      The total value in US dollars is: $1378.73
 *      
 * Solution Sketch:
 *      double currencyAmount;
 *      double total;
 * 
 *      // get the amount for the first currency
 *      total += currencyAmount;
 * 
 *      // get the amount for the second currency
 *      total += currencyAmount;
 * 
 *      // get the amount for the third currency
 *      total += currencyAmount;
 * 
 *      // output the total
 */
#include <iomanip> // library for fixed precision
#include <iostream>
using namespace std;

int main(void)
{
    // Conversion Data Estimates(02/05/2024): 1 EUR = 1.0729533 USD | 1 MXN = 0.058139496 USD | 1 CNY = 0.13941947 USD | 1 JPY = 0.0067195347 USD
    // declare variables and their data-type
    double totalUSD = 0;

    const double EUR_TO_USD = 1.0729533; // conversion rate as a constat
    double eurosTotal;                   // Euros total

    const double MXN_TO_USD = 0.058139496; // conversion rate as a constat
    double pesosTotal;                     // Mexican Pesos Total

    const double CNY_TO_USD = 0.13941947; // conversion rate as a constat
    double yuanTotal;                     // Chinese Yuan Total

    const double JPY_TO_USD = 0.0067195347; // conversion rate as a constat
    double yenTotal;                        // Japanses Yen Total

    // prompt user for forign currency totals and convert to US dollars
    cout << "How many Euros do you have? " << endl;
    cin >> eurosTotal;
    totalUSD += eurosTotal * EUR_TO_USD;

    cout << "How many Mexican Pesos do you have? " << endl;
    cin >> pesosTotal;
    totalUSD += pesosTotal * MXN_TO_USD;

    cout << "How many Chinese Yuan do you have? " << endl;
    cin >> yuanTotal;
    totalUSD += yuanTotal * CNY_TO_USD;

    cout << "How many Japanese Yen do you have? " << endl;
    cin >> yenTotal;
    totalUSD += yenTotal * JPY_TO_USD;

    // ouput USD currency total to two decimal places
    cout << "The total value in US dollars is: $" << fixed << setprecision(2) << totalUSD << endl;

    return 0;
}

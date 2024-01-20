#include <iostream>

using namespace std;

int main()
{
    int hourlyWage;

    // ==== expected unqualified-id ====
    // The compiler does not see the variable name as qualified.
    // Variable names can not start with a number, i.e., int 1YearSalary;
    int OneYearSalary;

    /* ==== use of undeclared identifier 'xyz' ==== 
     * The 'std' identifier from the iostream header file is missing.
     * Corrected by declaring the identifier in the 'using namesspace' above in the preprocessor area.
     */
    cout << "What is the hourly wage?" << endl;
    cin >> hourlyWage;

    OneYearSalary = hourlyWage * 40 * 50;

    cout << "Annual salary is: " << OneYearSalary << endl;

    // ==== expected ';' after xyz ====
    // The end of statements require a line termination which is the semicolon
    return 0;
}

// Anthony Hamlin

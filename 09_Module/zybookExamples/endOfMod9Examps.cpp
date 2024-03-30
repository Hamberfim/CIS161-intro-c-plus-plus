/* 9.15 C++ example: Annual salary tax rate calculation with vectors
zyDE 9.15.1: Various tax rates.
Vectors are useful to process tabular information. Income taxes are based on annual salary, usually with a tiered approach. Below is an example of a simple tax table:

Annual Salary	Tax Rate
0 to 20000	10%
Above 20000 to 50000	20%
Above 50000 to 100000	30%
Above 100000	40%

The below program uses a vector salaryBase to hold the cutoffs for each salary level and a parallel vector taxBase that has the corresponding tax rate.

Run the program and enter annual salaries of 40000 and 60000, then enter 0.
Modify the program to use two parallel vectors named annualSalaries and taxesToPay, each with 10 elements. Vectors annualSalaries holds up to 10 annual salaries entered; vector taxesToPay holds up to 10 corresponding amounts of taxes to pay for those annual salaries. Print the total annual salaries and taxes to pay after all input has been processed.
Run the program again with the same annual salary numbers as above.
Note: The calculation is inaccurate to how taxes are formally assessed and is a simplification for educational purposes only. */ 

#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int MAX_ELEMENTS = 10;
   int annualSalary;
   double taxRate;
   int taxToPay;
   int numSalaries;
   bool keepLooking;
   unsigned int i;
   vector<int> salaryBase(5);
   vector<double> taxBase(5);
   // FIXME: Declare annualSalaries and taxesToPay vectors to hold 10 elements each.
   // FIXME: Use the constant MAX_ELEMENTS to declare the vectors

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = 99999999;

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.10;
   taxBase.at(2) = 0.20;
   taxBase.at(3) = 0.30;
   taxBase.at(4) = 0.40;

   numSalaries = 0;

   cout << "\nEnter annual salary (0 to exit): " << endl;
   cin >> annualSalary;

   while (annualSalary > 0) {
      i = 0;
      keepLooking = true;

      // Search for the appropriate table row for given annualSalary
      while ((i < salaryBase.size()) && keepLooking) {
         if (annualSalary <= salaryBase.at(i)) {
            taxRate = taxBase.at(i);
            keepLooking = false;
         }
         else {
            ++i;
         }
      } // End inner loop (search for appropriate table row)

      taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount

      // FIXME: Insert code to include entries to the annual salaries and taxes to pay
      // FIXME: tables. Replace the appropriate variables with the vector element.
      cout << "Annual salary: " << annualSalary <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxToPay << endl;

      // Get the next annual salary
      cout << "\nEnter annual salary (0 to exit): " << endl;
      cin >> annualSalary;
   } // End outer while loop (valid annualSalary entered)

   // FIXME: Challenge - add code to sum the annual salaries and taxes to pay
   //        and print the totals

   return 0;
}

/* Solution */
#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int MAX_ELEMENTS = 10;
   int annualSalary;
   double taxRate;
   int taxToPay;
   int totalSalaries;
   int totalTaxes;
   int numSalaries;
   bool keepLooking;
   unsigned int i;
   int j;

   vector<int> salaryBase(5);
   vector<double> taxBase(5);
   vector<int> annualSalaries(MAX_ELEMENTS);
   vector<int> taxesToPay(MAX_ELEMENTS);

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = 99999999;

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.10;
   taxBase.at(2) = 0.20;
   taxBase.at(3) = 0.30;
   taxBase.at(4) = 0.40;

   numSalaries = 0;

   cout << "\nEnter annual salary (0 to exit): " << endl;
   cin >> annualSalary;

   while ((annualSalary > 0) && (numSalaries < MAX_ELEMENTS)) {
      i = 0;
      taxRate = 0;
      keepLooking = true;

      // Search for appropriate table row for given annualSalary
      while ((i < salaryBase.size()) && keepLooking) {
         if (annualSalary <= salaryBase.at(i)) {
            taxRate = taxBase.at(i);
            keepLooking = false;
         }
         else {
            ++i;
         }
      } // End inner while loop (search for appropriate table row)

      taxToPay = static_cast<int>(annualSalary * taxRate); // Truncate tax to an integer amount
      annualSalaries.at(numSalaries) = annualSalary;
      taxesToPay.at(numSalaries) = taxToPay;

      cout << "Annual salary: " << annualSalaries[numSalaries] <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxesToPay[numSalaries] << endl;
      ++numSalaries;

      // Get the next annual salary
      cout << "\nEnter annual salary (0 to exit): " << endl;
      cin >> annualSalary;
   } // End outer while loop (valid annualSalary entered)
   
   // Sum the annual salaries and taxes to pay and print the totals
   totalSalaries = 0;
   totalTaxes = 0;

   for (j = 0; j < numSalaries; ++j) {
      totalSalaries += annualSalaries[j];
      totalTaxes    += taxesToPay[j];
   }
   cout << "\nTotal salaries: " << totalSalaries <<
           "\tTotal taxes: " << totalTaxes << endl;

   return 0;
}

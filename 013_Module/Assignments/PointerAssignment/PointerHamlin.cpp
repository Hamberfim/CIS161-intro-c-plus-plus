/* Name: Pointer Assignment
 * Author: Instructor provided, modified Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Complete the following program. You may only add code to the TODO comment. */
#include <iostream>
using namespace std;

int main() {
  float price1;
  float price2;

  // input prices from the user
  cout << "Enter id 1: ";
  cin >> price1;
  cout << "Enter id 2: ";
  cin >> price2;

  float *pricePtr;

  /* TODO: Your solution goes here.
     Update pricePtr so the output is correct.
     Do not change anything else. */
  // check if price is equal, if true set to price1 to nullptr
  if (price1 == price2) {
    pricePtr = nullptr;
  } else {
    // set pricePtr to the address of the larger price
    pricePtr = (price1 > price2) ? &price1 : &price2;
  }

  // output message to the user
  if (pricePtr == nullptr) {
    cout << "The prices are the same." << endl;
  } else {
    cout << "The largest price is " << *pricePtr << "." << endl;
  }
}
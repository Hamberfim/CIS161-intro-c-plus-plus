#include <iostream>

using namespace std;

/* Name: FindArea
 * Author: Anthony Hamlin
 * Description:
 * This program computes the area of a square or rectangle based on the formula,
 * area = width * length.
 */

int main(void)
{
    // assuming input will be unsigned integers or decimals
    float area, width, length;

    // greet user and inform them of programs intent
    cout << "=== Calculate the Area of Floor Space ===" << endl;

    // get user input and assign the values to the declared variable
    cout << "Enter the floor width: " << endl;
    cin >> width;

    cout << "Enter the floor length: " << endl;
    cin >> length;

    // calculate the area
    area = width * length;

    // display the calculation
    cout << "The floor area is " << area << " square feet." << endl;

    // exit program
    return 0;
}

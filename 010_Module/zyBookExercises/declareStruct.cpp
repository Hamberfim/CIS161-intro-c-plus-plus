/* 10.2.2: Declaring a struct.
Define a struct named PatientData that contains two integer data members named heightInches and weightPounds. Sample output for the given program with inputs 63 115:
Patient data: 63 in, 115 lbs */

#include <iostream>
using namespace std;

/* Your solution goes here  */
struct PatientData {
   int heightInches;
   int weightPounds;
   };

int main() {
   PatientData lunaLovegood;

   cin >> lunaLovegood.heightInches;
   cin >> lunaLovegood.weightPounds;

   cout << "Patient data: "
        << lunaLovegood.heightInches << " in, "
        << lunaLovegood.weightPounds << " lbs" << endl;

   return 0;
}
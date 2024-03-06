/* Name: Overloading Functions
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * This program computes and displays the charges for a patient’s hospital stay. 
 * Instructions:
 * First, the program should ask if the patient was admitted as an inpatient or an outpatient.
 * If the patient was an inpatient, the following data should be entered:
 *      The number of days spent in the hospital
 *      The daily rate
 *      Hospital medication charges  {
 *      Charges for hospital services (lab tests, etc.)
 *      
 * The program should ask for the following data if the patient was an outpatient:
 *      Charges for hospital services (lab tests, etc.)
 *      Hospital medication charges
 *      
 *The program must use two overloaded functions (functions that have the same name but different parameters) to calculate the total charges.
 *One of the functions should accept arguments for the inpatient data, while the other function accepts arguments for outpatient information. 
 *Both functions should return the total charges.
 */
#include <iomanip>
#include <iostream>

using namespace std;

// overloading functions - Both functions should return the total charges
double medicalCharges(int daysInHospital,
                      double dailyRate,
                      double medicationCharges,
                      double hospitalServices)
{
    return (daysInHospital * dailyRate) + medicationCharges + hospitalServices;
    ;
}

double medicalCharges(double medicationCharges, double hospitalServices)
{
    return medicationCharges + hospitalServices;
}

int main(void)
{
    int patientType;
    int daysInHospital;
    double dailyRate;
    double medicationCharges;
    double hospitalServices;
    double totalCharges = 0;

    // was patient admitted as an inpatient or an outpatient.
    cout << "Was patient admitted as an inpatient or an outpatient?" << endl;
    cout << "Enter the number '1'(one) for inpatient or '2'(two) for outpatient (without the "
            "quotes): "
         << endl;
    cin >> patientType;
    while (patientType != 1 && patientType != 2) {
        cout << "Enter the number '1'(one) for inpatient or '2'(two) for outpatient (without the "
                "quotes): "
             << endl;
        cin >> patientType;
    }

    if (patientType == 1) {
        // inpatient
        // get nuber of days
        cout << "Enter number of days spent in the hospital: " << endl;
        cin >> daysInHospital;
        while (daysInHospital <= 0) {
            cout << "Hospital stay must be 1 or more days. Enter number of days spent in the "
                    "hospital: "
                 << endl;
            cin >> daysInHospital;
        }

        // get daily rate
        cout << "Enter the daily rate: " << endl;
        cin >> dailyRate;
        while (dailyRate <= 0) {
            cout << "Daily rate must be greater than zero. Enter the daily rate: " << endl;
            cin >> dailyRate;
        }

        // get medication charges
        cout << "Enter the charges for medications: " << endl;
        cin >> medicationCharges;
        while (medicationCharges < 0) {
            cout << "Medication cost can't be less than zeror. Enter the charges for medications: "
                 << endl;
            cin >> medicationCharges;
        }

        // get charges for services - labs
        cout << "Enter any hospital service charges (labs, x-rays, etc.): " << endl;
        cin >> hospitalServices;
        while (hospitalServices < 0) {
            cout << "Hospital service cost can't be less than zero. Enter any hospital service "
                    "charges (labs, x-rays, etc.): "
                 << endl;
            cin >> hospitalServices;
        }

        // call overloaded method
        totalCharges = medicalCharges(daysInHospital,
                                      dailyRate,
                                      medicationCharges,
                                      hospitalServices);

    } else if (patientType == 2) {
        // outpatient
        // get medication charges
        cout << "Enter the charges for medications: " << endl;
        cin >> medicationCharges;
        while (medicationCharges < 0) {
            cout << "Medication cost can't be less than zeror. Enter the charges for medications: "
                 << endl;
            cin >> medicationCharges;
        }

        // get charges for services - labs
        cout << "Enter any hospital service charges (labs, x-rays, etc.): " << endl;
        cin >> hospitalServices;
        while (hospitalServices < 0) {
            cout << "Hospital service cost can't be less than zero. Enter any hospital service "
                    "charges (labs, x-rays, etc.): "
                 << endl;
            cin >> hospitalServices;
        }

        // call overloaded method
        totalCharges = medicalCharges(medicationCharges, hospitalServices);
    }

    cout << "Patient's total charges are $" << fixed << setprecision(2) << totalCharges << endl;

    return 0;
}

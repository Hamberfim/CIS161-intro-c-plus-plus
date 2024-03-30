/* Modifying vector using range-based for loop
To modify a vector's elements using a range-based for loop, a programmer must declare the for loop's variable as a reference. The reference variable will refer to each vector element as the for loop iterates through the vector elements. Assigning the reference variable with a new value assigns the corresponding vector's element with that value. In the code example below, gradeVal will refer to each vector element, so the statement gradeVal = userGrade; assigns the vector elements with userGrade.

Figure 9.14.2: Modifying a vector using a range-based for loop. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<double> examGrades(4); // User's exam grades
   double averageGrade;
   
   // Prompt user for exam grades
   for (double& gradeVal : examGrades) {
      double userGrade;
      
      cin >> userGrade;
      gradeVal = userGrade;
   }
   
   averageGrade = 0.0;
   for (double gradeVal : examGrades) {
      averageGrade += gradeVal;
   }
   averageGrade = averageGrade / examGrades.size();
   
   cout << "Average grade: " << averageGrade << endl;
   
   return 0;
}

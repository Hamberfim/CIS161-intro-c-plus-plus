/* Range-based for loop with auto
Using auto further simplifies the amount of code needed to iterate through containers. auto causes the compiler to automatically determine the variable type needed in the range-based for loop. In the example below, examGrades is a vector of type double. Using auto to declare variable gradeVal in the for loop causes the compiler to determine that gradeVal is a double.

Figure 9.14.3: Using a range-based for loop with auto to output a vector's elements. *

	vector<double> examGrades = {45.7, 72.5, 53.2};

	for (auto gradeVal : examGrades) {
	   cout << gradeVal << endl;
	}


auto is used with & to declare a reference variable if the for loop modifies the elements in the container. In the example below, a reference variable is needed to modify the elements of vector examGrades. Thus, auto& is used to declare gradeVal.

Figure 9.14.4: Using a range-based for loop with auto and & to modify a vector's elements. 

	vector<double> examGrades = {45.7, 72.5, 53.2};

	for (auto& gradeVal : examGrades) {
	   gradeVal += 0.5;
	}

 
zyDE 9.14.1: Explore auto.
Change the variable type of vector v from int to: double, char, or string. Provide three input values of the new type to discover how auto works. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(3);  // v has three elements

  // Modifying the elements of vector v using input values
  for (auto& a : v) {
    cin >> a;
  }

  // Outputting elements of vector v
  for (auto a : v) {
     cout << a << endl;
  }

  return 0;
}

/* The following example shows three common uses of the range-based for loop with auto. The first for loop sums up the elements in vector v to find the average. Since the elements are not modified, & is not needed. The second for loop modifies each element of v and thus requires auto&. The third for loop outputs the elements and does not need &.

Figure 9.14.5: Using a range-based for loop with auto to compute average and to modify and output a vector's elements. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<double> examGrades = {45.7, 72.3, 53.6}; // User's exam grades
   double averageGrade;

   // Find the average of three values
   averageGrade = 0.0;
   for (auto gradeVal : examGrades) {
      averageGrade += gradeVal;
   }
   averageGrade = averageGrade / examGrades.size();
   cout << "Average grade: " << averageGrade << endl;

   // Increase each value by 0.5 
   for (auto& gradeVal : examGrades) {
      gradeVal += 0.5;
   }

   cout << "Adjusted grades:" << endl;
   // Output adjusted values 
   for (auto gradeVal : examGrades) {
      cout << gradeVal << endl;
   }

   return 0;
}

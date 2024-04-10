/* 11.5.2: Constructor overloading.

The Student class has a default constructor, a constructor with two parameters, and a constructor with three parameters. Declare the following objects:

student1 with no arguments
student2 with studentName and studentAge as arguments
student3 with studentName, studentAge, and studentHeight as arguments
Ex: If the input is Eve 13 4.75, then the output is:
Student: Unknown, 0, 0.00
Student: Eve, 13, 0.00
Student: Eve, 13, 4.75
 */
 
 #include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
   public:
      Student();
      Student(string studentName, int studentAge);
      Student(string studentName, int studentAge, double studentHeight);
      void Print();
   
   private:
      string name;
      int age;
      double height;
};

// Default constructor
Student::Student() {
   name = "Unknown";
   age = 0;
   height = 0.0;
}

Student::Student(string studentName, int studentAge) {  
   name = studentName;
   age = studentAge;
   height = 0.0;
}

Student::Student(string studentName, int studentAge, double studentHeight) {  
   name = studentName;
   age = studentAge;
   height = studentHeight;
}

void Student::Print() {
   cout << fixed << setprecision(2) << "Student: " << name << ", " << age << ", " << height << endl;
}

int main() {
   string studentName;
   int studentAge;
   double studentHeight;
   
   cin >> studentName;
   cin >> studentAge;
   cin >> studentHeight;

   /* Your code goes here */
   Student student1;
   Student student2(studentName, studentAge);
   Student student3(studentName, studentAge, studentHeight);
   

   student1.Print();
   student2.Print();
   student3.Print();
   
   return 0;
}

/* Name: Student Enrollment Tracker
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Create a class called Student that has:
 *      1.a few properties, for example, first name, last name and grade.
 *      2.a constructor that takes parameters and can initialize the properties.
 *      3.getter and setter function that can be used to access and modify the
 *        properties.
 * In main( ), create a vector Student objects and do the following:
 *      1.in a loop take input from uses and use the input to create Student
 *        objects.
 *      2.add the Student objects to the vector, recall the push_back
 *        function, for example: enrolledStudents.push_back(student).
 *      3.in a second loop use the getters to print information about each
 *        student.
 */

#include <iostream>
#include <limits>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::vector;

// validate string names -- I should somehow these validations helps to the
// class
bool isValidName(string name) {
  // check if string is empty
  if (name.length() == 0) {
    return false;
  }

  // check if string contains any numbers
  for (unsigned int i = 0; i < name.length(); i++) {
    if (name[i] >= '0' && name[i] <= '9') {
      return false;
    }
  }

  return true;
}

// validate grade 0-100
bool isValidGrade(int grade) {
  // must be 0-100
  if (grade < 0 || grade > 100) {
    return false;
  }
  return true;
}

class Student {
private:
  string first_name;
  string last_name;
  int grade;

public:
  Student() {}
  Student(string firstName, string lastName, int studentGrade)
      : first_name(firstName), last_name(lastName), grade(studentGrade) {}

  string getFirstName() const { return first_name; }
  void setFirstName(string first) { first_name = first; }

  string getLastName() const { return last_name; }
  void setLastName(string last) { last_name = last; }

  int getGrade() const { return grade; }
  void setGrade(int studentGrade) { grade = studentGrade; }

  string getFullName() const { return first_name + " " + last_name; }
};

void Student::setFirstName(string first) { first_name = first; }
void Student::setLastName(string last) { last_name = last; }
void Student::setGrade(int studentGrade) { grade = studentGrade; }

string Student::getFirstName() const { return first_name; }
string Student::getLastName() const { return last_name; }
int Student::getGrade() const { return grade; }

int main(void) {
  Student student;
  vector<Student> students;
  // Take input from users and create Student objects
  string firstName, lastName;
  int grade;

  while (true) {
    cout << "Enter first name (or 'q' to quit): ";
    cin >> firstName;

    if (firstName == "q") {
      break;
    }

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter grade: ";
    cin >> grade;

    // Validate input
    if (!isValidName(firstName) || !isValidName(lastName) ||
        !isValidGrade(grade)) {
      cerr << "Invalid input. Please try again." << endl;
      continue;
    }

    student.setFirstName(firstName);
    student.setLastName(lastName);
    student.setGrade(grade);

    // Create Student object and add it to the vector
    // Student student(firstName, lastName, grade);
    students.push_back(student);
  }

  // Print information about each student
  for (const auto &_student : students) {
    cout << "Student First Name: " << _student.getFirstName() << endl;
    cout << "Student Last Name: " << _student.getLastName() << endl;

    cout << _student.getFullName() << "'s current grade is "
         << _student.getGrade() << endl;
  }

  return 0;
}
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
  Student(const string &firstName, const string &lastName, int studentGrade)
      : first_name(firstName), last_name(lastName), grade(studentGrade) {}

  string getFirstName() const { return first_name; }
  void setFirstName(const string &first) { first_name = first; }

  string getLastName() const { return last_name; }
  void setLastName(const string &last) { last_name = last; }

  int getGrade() const { return grade; }
  void setGrade(int studentGrade) { grade = studentGrade; }

  string getFullName() const { return first_name + " " + last_name; }
};

// void Student::setFirstName(const string &first) { first_name = first; }
// void Student::setLastName(const string &last) { last_name = last; }
// void Student::setGrade(int studentGrade) { grade = studentGrade; }

// string Student::getFirstName() const { return first_name; }
// string Student::getLastName() const { return last_name; }
// int Student::getGrade() const { return grade; }

int main(void) {
  Student student;
  // create a vector Student
  vector<Student> students;

  // needed vars
  string firstName;
  string lastName;
  int grade;
  char quit;
  // bool again = true;

  // take input from users and use the input to create Student objects
  while (true) {
    // first name
    cout << "Enter student first name: ";
    cin >> firstName;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (cin.fail() || !isValidName(firstName)) {
      cerr << "ERROR! Input was not valid.Press Enter to try again" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Enter student first name: ";
      cin >> firstName;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter last name: ";
    cin >> lastName;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (cin.fail() || !isValidName(lastName)) {
      cerr << "ERROR! Input was not valid. Press Enter to try again." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Enter student last name: ";
      cin >> lastName;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter student grade: ";
    cin >> grade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (cin.fail() || !isValidGrade(grade)) {
      cerr << "ERROR! Input was not valid." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Enter grade: ";
      cin >> grade;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    student.setFirstName(firstName);
    student.setLastName(lastName);
    student.setGrade(grade);
    // add the Student objects to the vector
    students.push_back(student);

    cout << "Enter 'q' to quite or any other letter to another student."
         << endl;
    cin >> quit;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (tolower(quit) == 'q') {
      break;
    }
    continue;
  }

  cout << "\n====== Student enrollment and current grade ======" << endl;
  // in a second loop use the getters to print information about each student
  for (const auto &_student : students) {
    cout << "------------------------------------------------------" << endl;
    cout << "Student First Name: " << _student.getFirstName() << endl;
    cout << "Student Last Name: " << _student.getLastName() << endl;
    cout << _student.getFullName() << " has a current grade of "
         << _student.getGrade() << "%" << endl;
  }

  return 0;
}
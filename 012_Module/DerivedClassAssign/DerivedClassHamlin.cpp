/* Name: Derived Class
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * Write a base class Person and a derived class Student.
 *      A Person has a first name and a last name.
 *      A Student is a Person (it inherits) and it also has a student id.
 *
 * Write a Person class:
 *      write a constructor
 *      write accessors (getters)
 *      write mutators (setters)
 *
 * Write a Student class:
 *      write constructors
 *      write accessors (getters)
 *      write mutators (setters)
 *
 * Write a main( ) to test your classes:
 *      create a Student object
 *      print values from the Student object
 */

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Base class Person.
class Person {
public:
  // Constructor
  Person(const string &fName, const string &lName)
      : firstName(fName), lastName(lName) {}

  // Accessors (getters)
  string getFirstName() { return firstName; }
  string getLastName() { return lastName; }

  // Mutators (setters)
  void setFirstName(const string &set_fName) { firstName = set_fName; }
  void setLastName(const string &set_lName) { lastName = set_lName; }

private:
  string firstName;
  string lastName;
};

// Derived class Student
class Student : public Person {
public:
  // Constructor
  Student(const string &fName, const string &lName, const int &stdId)
      : Person(fName, lName), studentId(stdId) {}

  // Accessors (getters)
  int getStudentId() { return studentId; }

  // Mutators (setters)
  void setStudentId(const int &set_stdId) { studentId = set_stdId; }

private:
  int studentId;
};

int main() {
  // test person base class
  cout << "=== Test base class ===" << endl;
  Person person("Bill", "Williams");
  cout << "Base Person: " << person.getFirstName() << " "
       << person.getLastName() << "." << endl;

  // test mutators
  cout << "\n=== Test Mutators ===" << endl;
  person.setFirstName("William");
  person.setLastName("Willis");

  cout << "Base Person: " << person.getFirstName() << " "
       << person.getLastName() << "." << endl;

  // Create a Student object of the derived class
  Student student("Anthony", "Hamlin", 54321);

  cout << "\n=== Derived Student Object ===" << endl;
  // Print values from the Student object
  cout << "Student's Name: " << student.getFirstName() << " "
       << student.getLastName() << "." << endl;
  cout << "Student's ID: " << student.getStudentId() << endl;

  // test mutators
  cout << "\n=== Test Derived Mutators ===" << endl;
  student.setFirstName("Tom");
  student.setLastName("Thompson");
  student.setStudentId(7890);

  // Print values from the mutated Student object
  cout << "Student's Name: " << student.getFirstName() << " "
       << student.getLastName() << "." << endl;
  cout << "Student's ID: " << student.getStudentId() << endl;

  return 0;
}
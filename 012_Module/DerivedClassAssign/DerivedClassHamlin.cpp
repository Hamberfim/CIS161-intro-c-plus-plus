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

using std::cerr;
using std::cout;
using std::endl;
using std::string;

// Base class Person.
class Person {
public:
  // Constructor
  Person(string firstName, string lastName)
      : firstName(firstName), lastName(lastName) {}

  // Accessors (getters)
  string getFirstName() { return firstName; }
  string getLastName() { return lastName; }

  // Mutators (setters)
  void setFirstName(string firstName) { firstName = firstName; }
  void setLastName(string lastName) { lastName = lastName; }

private:
  string firstName;
  string lastName;
};

// Derived class Student
class Student : public Person {
public:
  // Constructor
  Student(string firstName, string lastName, int studentId)
      : Person(firstName, lastName), studentId(studentId) {}

  // Accessors (getters)
  int getId() { return studentId; }

  // Mutators (setters)
  void setId(int studentId) { this->studentId = studentId; }

private:
  int studentId;
};

int main() {
  // test person base class
  Person person("Bill", "Williams");
  cout << "Base Person: " << person.getFirstName() << " "
       << person.getLastName() << "." << endl;

  // Create a Student object of the derived class
  Student student("Anthony", "Hamlin", 54321);

  // Print values from the Student object
  cout << "Student's Name: " << student.getFirstName() << " "
       << student.getLastName() << "." << endl;
  cout << "Student's ID: " << student.getId() << endl;

  return 0;
}
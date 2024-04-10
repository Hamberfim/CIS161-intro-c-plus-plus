
#include <iostream>
#include <string>
using namespace std;

class Tutor {
   public:
      Tutor();
      void Print() const;

   private:
      string name;
      string topic;
};

Tutor::Tutor() : name("NoName"), topic("NeedsTopic") {}

void Tutor::Print() const {
   cout << name << ": " << topic << endl;
}

int main() {
   Tutor myTutor;

   myTutor.Print();

   return 0;
}


#include <iostream>
#include <string>
using namespace std;

class Tutor {
   public:
      Tutor();
      Tutor(string tutorName);
      void Print() const;

   private:
      string name;
      string topic;
};

Tutor::Tutor() : name("NoName"), topic("NoTopic") {}

Tutor::Tutor(string tutorName) : name(tutorName), topic("NoTopic") {}

void Tutor::Print() const {
   cout << topic << ", taught by " << name << endl;
}

int main() {
   Tutor myTutor;
   Tutor yourTutor("Kai");

   myTutor.Print();
   yourTutor.Print();

   return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Students {
   public:
      Students(int);
      int GetTotal() const { return  numStudents; }

   private:
      int numStudents;
};

Students::Students(int num) : numStudents(num) {}

class Tutor {
   public:
      Tutor(string);
      Tutor(string, int);
      void Print() const;

   private:
      string name;
      Students students;
};

Tutor::Tutor(string tutorName) : name(tutorName), students(0) {}
Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
   if (students.GetTotal() == 0){
      cout << name << " is solo" << endl;
   }
   else {
      cout << name << " has " << students.GetTotal() << " students" << endl;
   }
}

int main() {
   Tutor myTutor("Ann");
   Tutor yourTutor("Eve", 3);

   myTutor.Print();
   yourTutor.Print();

   return 0;
}



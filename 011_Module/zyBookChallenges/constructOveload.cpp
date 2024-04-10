
#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet();
      Pet(string petName, int yearsOld);
      void Print();

   private:
      string name;
      int age;
};

Pet::Pet() {
   name = "NoName";
   age = -1;
}

Pet::Pet(string petName, int yearsOld) {
   name = petName;
   age = yearsOld;
}

void Pet::Print() {
   cout << name << ", " << age << endl;
}

int main() {
   Pet dog;
   Pet cat("Max", 2);

   cat.Print();
   dog.Print();

   return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet();
      Pet(string petName);
      Pet(string petName, int yearsOld);
      void Print();

    private:
      string name;
      int age;
};

Pet::Pet() {
   name = "Unnamed";
   age = -1;
}

Pet::Pet(string petName) {
   name = petName;
   age = -1;
}

Pet::Pet(string petName, int yearsOld) {
   name = petName;
   age = yearsOld;
}

void Pet::Print() {
   cout << name << ", " << age << endl;
}

int main() {
   Pet dog;
   Pet cat("Simba");
   Pet bird("Sunny", 8);

   bird.Print();
   dog.Print();
   cat.Print();

   return 0;
}


#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet(string petName = "NoName", int yearsOld = -9999);
      void Print();

    private:
      string name;
      int age;
};

Pet::Pet(string petName, int yearsOld) {
   name = petName;
   age = yearsOld;
}

void Pet::Print() {
   cout << name << ", " << age << endl;
}

int main() {
   Pet dog;
   Pet cat("Luna", 3);

   dog.Print();
   cat.Print();

   return 0;
}



#include <iostream>
#include <string>
using namespace std;

class Pet {
   public:
      Pet(string petName = "NoName", int yearsOld = -1);
      void Print();

    private:
      string name;
      int age;
};

Pet::Pet(string petName, int yearsOld) {
   name = petName;
   age = yearsOld;
}

void Pet::Print() {
   cout << name << ", " << age << endl;
}

int main() {
   Pet dog;
   Pet cat("Milo");
   Pet bird("Rio", 8);

   dog.Print();
   bird.Print();
   cat.Print();

   return 0;
}


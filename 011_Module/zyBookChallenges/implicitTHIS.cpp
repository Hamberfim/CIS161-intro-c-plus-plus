
#include <iostream>
using namespace std;

class Airplane {
   public:
      Airplane();
      void Print() const;
      void SetAltitude(int altitude);
   private:
      int altitude;
};

Airplane::Airplane() {
   altitude = 0;
}

void Airplane::SetAltitude(int altitude) {
   this->altitude = altitude;
}

void Airplane::Print() const {
   cout << altitude << " meters" << endl;
}

int main() {
   Airplane boeing747;

   boeing747.SetAltitude(10000);
   boeing747.Print();

   return 0;
}



#include <iostream>
using namespace std;

class Airplane {
   public:
      Airplane(int totalSeats, int passengers);
      int GetAvailableSeats() const;
   private:
      int totalSeats;
      int passengers;
};

Airplane::Airplane(int totalSeats, int passengers) {
   this->totalSeats = totalSeats;
   this->passengers = passengers;
}

int Airplane::GetAvailableSeats() const {
   return totalSeats - passengers;
}

int main() {
   Airplane boeing737(200, 80);

   cout << "Seats: " << boeing737.GetAvailableSeats() << endl;

   return 0;
}


#include <iostream>
using namespace std;

class Airplane {
   public:
      Airplane();
      void AddPassengers(int passengers);
      int GetAvailableSeats() const;
   private:
      int totalSeats;
      int passengers;
};

Airplane::Airplane() {
   totalSeats = 350;
   passengers = 0;
}

void Airplane::AddPassengers(int passengers) {
   this->passengers = this->passengers + passengers;
}

int Airplane::GetAvailableSeats() const {
   return totalSeats - passengers;
}

int main() {
   Airplane airbus330;

   airbus330.AddPassengers(1);
   airbus330.AddPassengers(4);

   cout << airbus330.GetAvailableSeats() << " seats" << endl;

   return 0;
}

/* Add a constructor initializer list to the default constructor Point() to initialize color with "Unknown" and coordinates with a vector of size 3.

Ex: If the input is honeydew 240 255 240, then the output is:

Point: Unknown, 3 coordinates: 0, 0, 0
Point: honeydew, 3 coordinates: 240, 255, 240 */

#include <iostream>
#include <vector>
using namespace std;

class Point {
   public:
      Point();
      void ReadColor();
      void ReadCoordinates();
      void Print() const;
   private:
      string color;
      vector<int> coordinates; 
};

Point::Point() /* Your code goes here */ : color("Unknown"), coordinates(3, 0) {
}

void Point::ReadColor() {
   cin >> color;
}

void Point::ReadCoordinates() {
   int i;
   for (i = 0; i < coordinates.size(); ++i) {
      cin >> coordinates.at(i);
   }
}

void Point::Print() const {
   int i;
  
   cout << "Point: " << color << ", ";
   if (coordinates.size() == 0) {
      cout << "No coordinates" << endl;
   }
   else {
      cout << coordinates.size() << " coordinates: ";
      for (i = 0; i < coordinates.size() - 1; ++i) {
         cout << coordinates.at(i) << ", ";
      }
      cout << coordinates.at(coordinates.size() - 1) << endl;
   }
}

int main() {
   string color;
   Point myPoint;

   myPoint.Print();

   myPoint.ReadColor();
	myPoint.ReadCoordinates();
	myPoint.Print();
   
   return 0;
} 

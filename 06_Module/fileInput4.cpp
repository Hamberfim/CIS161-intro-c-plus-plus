#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
   ifstream inFS;     // Input file stream
   string restaurantName;
   string userName;
   int userRating;
   int userRatingSum = 0;
   int userRatingCount = 0;

   // Open file
   inFS.open("Trattoria_Reviews.txt");
   
   if (!inFS.is_open()) {
      cout << "Could not open file Trattoria_Reviews.txt."<< endl;
      return 1;
   }

   // Read and display the restaurant's name
   getline(inFS, restaurantName);
   cout << endl << restaurantName << endl;
   cout << "--------------------" << endl;
   
   // Loop to read all user reviews
   while (!inFS.eof()) {
      inFS >> userName;
      inFS >> userRating;
           
      if (!inFS.fail()) {
         // Display user's name and rating
         cout << "User name: " << userName << endl;
         cout << "   Rating: " << userRating << endl;
         cout << endl;
         
         // Add to the sum of all ratings so far
         userRatingSum += userRating;
         
         // Increment the number of ratings read
         userRatingCount++;
      }
   }
   
   // Display the restaurant's average rating
   cout << "--------------------" << endl;
   cout << "Average rating: ";
   cout << ((double)userRatingSum / userRatingCount) << endl;
   

   // Close file when done reading
   inFS.close();

   return 0;
}
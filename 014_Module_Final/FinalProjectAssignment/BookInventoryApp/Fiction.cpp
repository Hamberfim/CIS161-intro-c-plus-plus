#include "Fiction.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Constructor
Fiction::Fiction(string title, string author, int pubDate, string isbn,
                 double price, int quantity, string genre)
    : Book(title, author, pubDate, isbn, price, quantity), genre(genre) {}

Fiction::~Fiction() {
  // No resources to release
}

// Overridden display function
void Fiction::display() {
  Book::display();
  cout << "Genre: " << genre << endl;
}

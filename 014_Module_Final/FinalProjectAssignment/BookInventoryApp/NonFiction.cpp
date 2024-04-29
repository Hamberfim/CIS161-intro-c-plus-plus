#include "NonFiction.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Constructor implementation
NonFiction::NonFiction(string title, string author, int pubDate, string isbn,
                       double price, int quantity, string subject)
    : Book(title, author, pubDate, isbn, price, quantity), subject(subject) {}

NonFiction::~NonFiction() {
  // No resources to release
}

// Overridden display function implementation
void NonFiction::display() {
  Book::display();
  cout << "Subject: " << subject << endl;
}

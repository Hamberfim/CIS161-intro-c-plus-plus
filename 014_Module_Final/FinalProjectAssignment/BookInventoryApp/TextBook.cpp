#include "TextBook.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Constructor
TextBook::TextBook(string title, string author, int pubDate, string isbn,
                   double price, int quantity, int edition)
    : Book(title, author, pubDate, isbn, price, quantity), edition(edition) {}

TextBook::~TextBook() {
  // No resources to release
}

// Overridden display function
void TextBook::display() {
  Book::display();
  cout << "Edition: " << edition << endl;
}

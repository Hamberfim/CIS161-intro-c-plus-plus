#include "TextBook.h"
#include <iostream>

// Constructor implementation
TextBook::TextBook(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, int edition)
    : Book(title, author, pubDate, isbn, price, quantity), edition(edition) {}

// Overridden display function implementation
void TextBook::display() {
    Book::display();
    std::cout << "Edition: " << edition << std::endl;
}

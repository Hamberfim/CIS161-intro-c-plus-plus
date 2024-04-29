#include "Fiction.h"
#include <iostream>

// Constructor implementation
Fiction::Fiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string genre)
    : Book(title, author, pubDate, isbn, price, quantity), genre(genre) {}

// Overridden display function implementation
void Fiction::display() {
    Book::display();
    std::cout << "Genre: " << genre << std::endl;
}

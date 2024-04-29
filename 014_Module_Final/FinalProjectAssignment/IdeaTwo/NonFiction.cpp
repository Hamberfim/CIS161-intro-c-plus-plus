#include "NonFiction.h"
#include <iostream>

// Constructor implementation
NonFiction::NonFiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string subject)
    : Book(title, author, pubDate, isbn, price, quantity), subject(subject) {}

// Overridden display function implementation
void NonFiction::display() {
    Book::display();
    std::cout << "Subject: " << subject << std::endl;
}

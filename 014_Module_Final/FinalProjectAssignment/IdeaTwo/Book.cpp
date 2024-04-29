#include "Book.h"
#include <iostream>

// Constructor implementation
Book::Book(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity)
    : title(title), author(author), pubDate(pubDate), isbn(isbn), price(price), quantity(quantity) {}

// Display function implementation
void Book::display() {
    std::cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Date: " << pubDate
              << "\nISBN: " << isbn << "\nPrice: " << price << "\nQuantity: " << quantity << std::endl;
}

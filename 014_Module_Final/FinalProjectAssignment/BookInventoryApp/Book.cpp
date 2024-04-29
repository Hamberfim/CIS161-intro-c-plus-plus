#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

// Book Constructor
Book::Book(string title, string author, int pubDate, string isbn, double price,
           int quantity)
    : title(title), author(author), pubDate(pubDate), isbn(isbn), price(price),
      quantity(quantity) {}

Book::~Book() {
  // No resources to release
}

// Display function
void Book::display() {
  cout << "Title: " << title << "\nAuthor: " << author
       << "\nPublication Date: " << pubDate << "\nISBN: " << isbn
       << "\nPrice: " << price << "\nQuantity: " << quantity << endl;
}

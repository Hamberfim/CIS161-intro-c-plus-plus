/* Name: Book Inventory - Final Project
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * A program that will help manage an inventory of books for a bookstore.
 * Maintains a collection/array of book entries that contain specific
 * information about each of the books:
 *    Title, Author(s), Publication date, ISBN, Retail Price, Quantity in stock.
 * Provides a console interface for working with the inventory that allows for:
 *      Adding, deleting, and displaying detailed information about the books.
 */
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

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

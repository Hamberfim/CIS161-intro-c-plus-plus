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
#ifndef BOOK_H
#define BOOK_H

#include <string>

using std::string;

// Book Base class
class Book {
public:
  // Book Constructor
  Book(string title, string author, int pubDate, string isbn, double price,
       int quantity);

  // Destructor
  virtual ~Book();

  // Virtual function for displaying book information
  virtual void display();

protected:
  string title;
  string author;
  int pubDate;
  string isbn;
  double price;
  int quantity;
};

#endif // BOOK_H

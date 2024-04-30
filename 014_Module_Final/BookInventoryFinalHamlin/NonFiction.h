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
#ifndef NONFICTION_H
#define NONFICTION_H

#include "Book.h"

// Derived class for Non-Fiction
class NonFiction : public Book {
public:
  // Constructor
  NonFiction(string title, string author, int pubDate, string isbn,
             double price, int quantity, string subject);

  // Destructor
  virtual ~NonFiction();

  // Overridden display function
  void display() override;

private:
  string subject;
};

#endif // NONFICTION_H

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

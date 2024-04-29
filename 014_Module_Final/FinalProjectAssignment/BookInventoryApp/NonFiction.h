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

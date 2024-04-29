#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "Book.h"

// Derived class
class TextBook : public Book {
public:
  // TextBook Constructor
  TextBook(string title, string author, int pubDate, string isbn, double price,
           int quantity, int edition);

  // Destructor
  virtual ~TextBook();

  // Overridden display function
  void display() override;

private:
  int edition;
};

#endif // TEXTBOOK_H

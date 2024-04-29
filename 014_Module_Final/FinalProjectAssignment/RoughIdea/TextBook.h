#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include "Book.h"

class TextBook : public Book {
public:
    TextBook(const std::string& title, const std::string& authors, int publicationDate,
             const std::string& isbn, double retailPrice, int quantity, const std::string& subject);

    void display() const override;  // Override Book::display()

private:
    std::string subject;
};

#endif

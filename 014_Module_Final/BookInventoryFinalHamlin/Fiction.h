#ifndef FICTION_H
#define FICTION_H

#include "Book.h"

// Derived class
class Fiction : public Book {
public:
    // Fiction Constructor
    Fiction(string title, string author, int pubDate, string isbn, double price,
            int quantity, string genre);

    // Destructor
    virtual ~Fiction();

    // Overridden display function
    void display() override;

private:
    string genre;
};

#endif // FICTION_H

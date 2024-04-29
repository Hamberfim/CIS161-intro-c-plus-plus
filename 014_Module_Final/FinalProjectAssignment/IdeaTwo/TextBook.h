#include "Book.h"

// Derived class
class TextBook : public Book {
public:
    // Constructor
    TextBook(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, int edition);

    // Overridden display function
    void display() override;

private:
    int edition;
};

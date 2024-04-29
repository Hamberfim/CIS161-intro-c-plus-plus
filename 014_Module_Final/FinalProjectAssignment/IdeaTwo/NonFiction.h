#include "Book.h"

// Derived class for Non-Fiction books
class NonFiction : public Book {
public:
    // Constructor
    NonFiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string subject);

    // Overridden display function
    void display() override;

private:
    std::string subject;
};

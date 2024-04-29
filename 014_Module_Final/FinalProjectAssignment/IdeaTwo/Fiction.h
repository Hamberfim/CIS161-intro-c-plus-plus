#include "Book.h"

// Derived class for Fiction books
class Fiction : public Book {
public:
    // Constructor
    Fiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string genre);

    // Overridden display function
    void display() override;

private:
    std::string genre;
};

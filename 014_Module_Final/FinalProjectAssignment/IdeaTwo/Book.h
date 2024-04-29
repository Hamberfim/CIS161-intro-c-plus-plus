#include <string>

// Base class
class Book {
public:
    // Constructor
    Book(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity);

    // Virtual function for displaying book information
    virtual void display();

protected:
    std::string title;
    std::string author;
    int pubDate;
    std::string isbn;
    double price;
    int quantity;
};

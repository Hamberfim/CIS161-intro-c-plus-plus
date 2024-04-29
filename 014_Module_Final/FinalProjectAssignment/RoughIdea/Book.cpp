#include "Book.h"

Book::Book(const std::string& title, const std::string& authors, int publicationDate,
           const std::string& isbn, double retailPrice, int quantity) :
    title(title), authors(authors), publicationDate(publicationDate), isbn(isbn),
    retailPrice(retailPrice), quantity(quantity) {}

void Book::display() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author(s): " << authors << std::endl;
    std::cout << "Publication Date: " << publicationDate << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
    std::cout << "Retail Price: $" << std::fixed << std::setprecision(2) << retailPrice << std::endl;
    std::cout << "Quantity in Stock: " << quantity << std::endl;
}

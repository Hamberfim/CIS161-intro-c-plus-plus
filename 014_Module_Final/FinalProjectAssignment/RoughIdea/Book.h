#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& authors, int publicationDate,
         const std::string& isbn, double retailPrice, int quantity);

    virtual void display() const;  // Virtual for polymorphism

    const std::string& getTitle() const { return title; }
    const std::string& getAuthors() const { return authors; }
    int getPublicationDate() const { return publicationDate; }
    const std::string& getIsbn() const { return isbn; }
    double getRetailPrice() const { return retailPrice; }
    int getQuantity() const { return quantity; }

private:
    std::string title;
    std::string authors;
    int publicationDate;
    std::string isbn;
    double retailPrice;
    int quantity;
};

#endif

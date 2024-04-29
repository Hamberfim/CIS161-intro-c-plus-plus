/* This program creates a Book base class and TextBook, NonFiction, and Fiction derived classes. It uses a std::vector of std::unique_ptr<Book> to store the books. The menu function handles user interaction, allowing the user to add, remove, and display books. The display function is a virtual function, allowing it to be overridden in derived classes. This allows each type of book to display its information in a unique way. */

#include <iostream>
#include <vector>
#include <memory>

// Base class
class Book {
public:
    Book(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity)
        : title(title), author(author), pubDate(pubDate), isbn(isbn), price(price), quantity(quantity) {}

    virtual void display() {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nPublication Date: " << pubDate
                  << "\nISBN: " << isbn << "\nPrice: " << price << "\nQuantity: " << quantity << std::endl;
    }

protected:
    std::string title;
    std::string author;
    int pubDate;
    std::string isbn;
    double price;
    int quantity;
};

// Derived class
class TextBook : public Book {
public:
    TextBook(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, int edition)
        : Book(title, author, pubDate, isbn, price, quantity), edition(edition) {}

    void display() override {
        Book::display();
        std::cout << "Edition: " << edition << std::endl;
    }

private:
    int edition;
};

// Derived class for Non-Fiction books
class NonFiction : public Book {
public:
    NonFiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string subject)
        : Book(title, author, pubDate, isbn, price, quantity), subject(subject) {}

    void display() override {
        Book::display();
        std::cout << "Subject: " << subject << std::endl;
    }

private:
    std::string subject;
};

// Derived class for Fiction books
class Fiction : public Book {
public:
    Fiction(std::string title, std::string author, int pubDate, std::string isbn, double price, int quantity, std::string genre)
        : Book(title, author, pubDate, isbn, price, quantity), genre(genre) {}

    void display() override {
        Book::display();
        std::cout << "Genre: " << genre << std::endl;
    }

private:
    std::string genre;
};


/* the function, if the user enters an invalid option or index, an exception is thrown. The exception is caught in the catch block, and an error message is displayed to the user. This allows the program to handle errors gracefully and continue running even when an error occurs. */
// Function to display menu and handle user interaction
void menu(std::vector<std::unique_ptr<Book>>& books) {
    while (true) {
        std::cout << "Main menu: Select an option.\n1. Add item\n2. Remove item\n3. Display all items\n4. Exit\n";
        int option;
        std::cin >> option;

        try {
            if (option == 1) {
                std::cout << "What type of item will be added?\n1. Add Book\n2. Add TextBook\n3. Add NonFiction\n4. Add Fiction\n";
                int type;
                std::cin >> type;

                std::string title, author, isbn, subject, genre;
                int pubDate, quantity, edition;
                double price;

                std::cout << "Enter title: ";
                std::cin >> title;
                std::cout << "Enter author: ";
                std::cin >> author;
                std::cout << "Enter publication date: ";
                std::cin >> pubDate;
                std::cout << "Enter ISBN: ";
                std::cin >> isbn;
                std::cout << "Enter price: ";
                std::cin >> price;
                std::cout << "Enter quantity: ";
                std::cin >> quantity;

                if (type == 1) {
                    books.push_back(std::make_unique<Book>(title, author, pubDate, isbn, price, quantity));
                } else if (type == 2) {
                    std::cout << "Enter edition: ";
                    std::cin >> edition;
                    books.push_back(std::make_unique<TextBook>(title, author, pubDate, isbn, price, quantity, edition));
                } else if (type == 3) {
                    std::cout << "Enter subject: ";
                    std::cin >> subject;
                    books.push_back(std::make_unique<NonFiction>(title, author, pubDate, isbn, price, quantity, subject));
                } else if (type == 4) {
                    std::cout << "Enter genre: ";
                    std::cin >> genre;
                    books.push_back(std::make_unique<Fiction>(title, author, pubDate, isbn, price, quantity, genre));
                } else {
                    throw std::invalid_argument("Invalid type.");
                }

            } else if (option == 2) {
                std::cout << "Enter the index of the item that should be removed: ";
                int index;
                std::cin >> index;
                if (index < books.size()) {
                    books.erase(books.begin() + index);
                } else {
                    throw std::out_of_range("Invalid index.");
                }

            } else if (option == 3) {
                for (auto& book : books) {
                    book->display();
                    std::cout << std::endl;
                }

            } else if (option == 4) {
                break;

            } else {
                throw std::invalid_argument("Invalid option.");
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
}


int main() {
    std::vector<std::unique_ptr<Book>> books;
    menu(books);
    return 0;
}


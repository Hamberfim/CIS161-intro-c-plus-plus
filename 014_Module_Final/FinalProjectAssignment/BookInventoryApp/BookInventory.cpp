#include "Book.h"
#include "Fiction.h"
#include "NonFiction.h"
#include "TextBook.h"
#include <iostream>
#include <limits>
#include <memory>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::make_unique;
using std::numeric_limits;
using std::streamsize;
using std::string;
using std::unique_ptr;
using std::vector;

// Function to display menu and handle user input
void menu(vector<unique_ptr<Book>> &books) {
  while (true) {
    int option = 0;
    while (option < 1 || option > 4) {
      cout << "Main menu: Select an option.\n1. Add item\n2. Remove item\n3. "
              "Display all items\n4. Exit\n";
      cin >> option;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      if (option < 1 || option > 4) {
        cout << "Error! Invalid option. Please enter a number between 1 and 4."
             << endl;
      }
    }

    if (option == 1) {
      int type = 0;
      while (type < 1 || type > 4) {
        cout << "What type of item will be added?\n1. Add Misc. Book\n2. Add "
                "TextBook\n3. Add NonFiction Book\n4. Add Fiction Book\n";
        cin >> type;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (type < 1 || type > 4) {
          cout << "Error! Invalid type. Please enter a number between 1 and 4."
               << endl;
        }
      }

      string title, author, isbn, subject, genre;
      string pubDateStr, quantityStr, editionStr, priceStr;
      int pubDate, quantity, edition;
      double price;

      cout << "Enter title: ";
      getline(cin, title);
      cout << "Enter author: ";
      getline(cin, author);
      cout << "Enter publication date: ";
      getline(cin, pubDateStr);
      pubDate = stoi(pubDateStr);
      cout << "Enter ISBN: ";
      getline(cin, isbn);
      cout << "Enter price: ";
      getline(cin, priceStr);
      price = stod(priceStr);
      cout << "Enter quantity: ";
      getline(cin, quantityStr);
      quantity = stoi(quantityStr);

      if (type == 1) {
        books.push_back(std::make_unique<Book>(title, author, pubDate, isbn,
                                               price, quantity));
      } else if (type == 2) {
        cout << "Enter edition: ";
        getline(cin, editionStr);
        edition = stoi(editionStr);
        books.push_back(std::make_unique<TextBook>(title, author, pubDate, isbn,
                                                   price, quantity, edition));
      } else if (type == 3) {
        cout << "Enter subject: ";
        getline(cin, subject);
        books.push_back(std::make_unique<NonFiction>(
            title, author, pubDate, isbn, price, quantity, subject));
      } else if (type == 4) {
        cout << "Enter genre: ";
        getline(cin, genre);
        books.push_back(std::make_unique<Fiction>(title, author, pubDate, isbn,
                                                  price, quantity, genre));
      }

    } else if (option == 2) {
      cout << "Enter the number of the item that should be removed (1, 2, "
              "etc.): ";
      string indexStr;
      getline(cin, indexStr);
      size_t index = stoi(indexStr) - 1; // zero index
      if (index < books.size()) {
        books.erase(books.begin() + index);
      } else {
        cout << "Error! Invalid index. Please enter a valid book number."
             << endl;
      }

    } else if (option == 3) {
      int countIndex = 1;
      for (auto &book : books) {
        cout << "Book #" << countIndex++ << endl;
        book->display();
        cout << endl;
      }

    } else if (option == 4) {
      break;
    }
  }
}

int main(void) {
  vector<unique_ptr<Book>> books;

  // Adding some books
  books.push_back(std::make_unique<Book>("U.S. Dictionary", "Mrs. Webster",
                                         1900, "123456789", 19.99, 10));
  books.push_back(std::make_unique<TextBook>("Murach's C++ Programming",
                                             "Delamater, Murach", 2022,
                                             "987654321", 49.99, 20, 2));
  books.push_back(std::make_unique<NonFiction>(
      "Bread & Pastry", "Author3", 2020, "54637281", 39.99, 30, "Culinary"));
  books.push_back(std::make_unique<Fiction>("Sleeping Cat", "Mr. Mittens", 1985,
                                            "99999999", 19.99, 40, "Fantasy"));

  menu(books);
  return 0;
}
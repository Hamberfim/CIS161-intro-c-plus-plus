#include "Book.h"
#include "Fiction.h"
#include "NonFiction.h"
#include "TextBook.h"
#include <exception>
#include <iostream>
#include <memory>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::exception;
using std::invalid_argument;
using std::make_unique;
using std::out_of_range;
using std::string;
using std::unique_ptr;
using std::vector;

// Function to display menu and handle user input
void menu(vector<unique_ptr<Book>> &books) {
  while (true) {
    cout << "Main menu: Select an option.\n1. Add item\n2. Remove item\n3. "
            "Display all items\n4. Exit\n";
    string optionStr;
    getline(cin, optionStr);
    int option = stoi(optionStr);

    try {
      if (option < 1 || option > 4) {
        throw invalid_argument("Error! Invalid option.");
      }
      if (option == 1) {
        cout << "What type of item will be added?\n1. Add Misc. Book\n2. Add "
                "TextBook\n3. Add NonFiction Book\n4. Add Fiction Book\n";
        string typeStr;
        getline(cin, typeStr);
        int type = stoi(typeStr);

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
          books.push_back(std::make_unique<TextBook>(
              title, author, pubDate, isbn, price, quantity, edition));
        } else if (type == 3) {
          cout << "Enter subject: ";
          getline(cin, subject);
          books.push_back(std::make_unique<NonFiction>(
              title, author, pubDate, isbn, price, quantity, subject));
        } else if (type == 4) {
          cout << "Enter genre: ";
          getline(cin, genre);
          books.push_back(std::make_unique<Fiction>(
              title, author, pubDate, isbn, price, quantity, genre));
        } else {
          throw invalid_argument("Error! Invalid type.");
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
          throw out_of_range("Error! Invalid index.");
        }

      } else if (option == 3) {
        for (auto &book : books) {
          book->display();
          cout << endl;
        }

      } else if (option == 4) {
        break;

      } else {
        throw invalid_argument("Error! Invalid option.");
      }
    } catch (const exception &e) {
      cerr << "Error: " << e.what() << endl;
    }
  }
}

int main(void) {
  vector<unique_ptr<Book>> books;
  menu(books);
  return 0;
}
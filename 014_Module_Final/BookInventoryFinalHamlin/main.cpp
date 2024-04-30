/* Name: Book Inventory - Final Project
 * Author: Anthony Hamlin
 * CIS161 - 20447
 * Description:
 * A program that will help manage an inventory of books for a bookstore.
 * Maintains a collection/array of book entries that contain specific
 * information about each of the books:
 *    Title, Author(s), Publication date, ISBN, Retail Price, Quantity in stock.
 * Provides a console interface for working with the inventory that allows for:
 *      Adding, deleting, and displaying detailed information about the books.
 */
#include "Book.h"
#include "Fiction.h"
#include "NonFiction.h"
#include "TextBook.h"
#include <exception>
#include <iostream>
#include <limits>
#include <memory>
#include <vector>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::exception;
using std::invalid_argument;
using std::make_unique;
using std::numeric_limits;
using std::out_of_range;
using std::streamsize;
using std::string;
using std::unique_ptr;
using std::vector;

// display menu and handle user input
void menu(vector<unique_ptr<Book>> &books) {
  while (true) {
    int option = -1;
    cout << "Main menu: \nSelect an option.\n1. Add item\n2. Remove item\n3. "
            "Display all items\n4. Exit\n";
    cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (!cin) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Error! Enter a valid number betwwen 1-4." << endl;

      cout << "Main menu: Select an option.\n1. Add item\n2. Remove item\n3. "
              "Display all items\n4. Exit\n";
      cin >> option;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (option == 1) {
      int type = -1;
      cout << "Add Book menu: \nWhat type of book are you adding?\n1. Add "
              "Basic Book\n2. Add "
              "TextBook\n3. Add NonFiction Book\n4. Add Fiction Book\n";
      cin >> type;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      while (!cin) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error! Enter a valid number betwwen 1-4." << endl;

        cout << "Add Book menu: \nWhat type of book are you adding?\n1. Add "
                "Basic Book\n2. Add "
                "TextBook\n3. Add NonFiction Book\n4. Add Fiction Book\n";
        cin >> type;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }

      // mixing some types for conversion below
      string title, author, isbn, subject, genre;
      string pubDateStr, quantityStr, editionStr, priceStr;
      int pubDate, quantity, edition;
      double price;

      // some error handling - not fully implemented but it keeps the app from
      // exiting with an error
      // TODO: complete and test validation of input for specificity
      try {
        cout << "Enter title: ";
        getline(cin, title);
      } catch (const exception &e) {
        title = "unknown";
        cerr << "Error getting title: " << e.what() << endl;
      }

      try {
        cout << "Enter author: ";
        getline(cin, author);
      } catch (const exception &e) {
        author = "unknown";
        cerr << "Error getting author: " << e.what() << endl;
      }

      try {
        cout << "Enter publication date: ";
        getline(cin, pubDateStr);
        pubDate = stoi(pubDateStr);
      } catch (const invalid_argument &e) {
        pubDate = -1;
        cerr << "Error converting publication date: Invalid format." << endl;
      } catch (const out_of_range &e) {
        pubDate = -1;
        cerr << "Error converting publication date: Out of range." << endl;
      } catch (const exception &e) {
        pubDate = -1;
        cerr << "Error getting publication date: " << e.what() << endl;
      }

      try {
        cout << "Enter ISBN: ";
        getline(cin, isbn);
      } catch (const exception &e) {
        isbn = -1;
        cerr << "Error getting ISBN: " << e.what() << endl;
      }

      try {
        cout << "Enter price: ";
        getline(cin, priceStr);
        price = stod(priceStr);
      } catch (const invalid_argument &e) {
        price = -1;
        cerr << "Error converting price: Invalid format." << endl;
      } catch (const out_of_range &e) {
        price = -1;
        cerr << "Error converting price: Out of range." << endl;
      } catch (const exception &e) {
        price = -1;
        cerr << "Error getting price: " << e.what() << endl;
      }

      try {
        cout << "Enter quantity: ";
        getline(cin, quantityStr);
        quantity = stoi(quantityStr);
      } catch (const invalid_argument &e) {
        quantity = -1;
        cerr << "Error converting quantity: Invalid format." << endl;
      } catch (const out_of_range &e) {
        quantity = -1;
        cerr << "Error converting quantity: Out of range." << endl;
      } catch (const exception &e) {
        quantity = -1;
        cerr << "Error getting quantity: " << e.what() << endl;
      }

      if (type == 1) {
        books.push_back(std::make_unique<Book>(title, author, pubDate, isbn,
                                               price, quantity));
      } else if (type == 2) {
        // TODO: this needs validation too
        cout << "Enter edition: ";
        getline(cin, editionStr);
        edition = stoi(editionStr);
        books.push_back(std::make_unique<TextBook>(title, author, pubDate, isbn,
                                                   price, quantity, edition));
      } else if (type == 3) {
        // TODO: this needs validation too
        cout << "Enter subject: ";
        getline(cin, subject);
        books.push_back(std::make_unique<NonFiction>(
            title, author, pubDate, isbn, price, quantity, subject));
      } else if (type == 4) {
        // TODO: this needs validation too
        cout << "Enter genre: ";
        getline(cin, genre);
        books.push_back(std::make_unique<Fiction>(title, author, pubDate, isbn,
                                                  price, quantity, genre));
      }

      // space in output
      cout << endl;

    } else if (option == 2) {
      cout << "Enter the number of the item that should be removed (1, 2, "
              "etc.): ";
      string indexStr;
      getline(cin, indexStr);
      try {
        // can the string be converted to an integer?
        size_t index = stoi(indexStr) - 1; // zero index
        // is there a book with that index number
        if (index < books.size()) {
          books.erase(books.begin() + index);
        } else {
          cout << "Error! Invalid index. Please enter a valid book number."
               << endl;
        }
      } catch (const invalid_argument &e) {
        cout << "Error! Invalid input format. Please enter a number." << endl;
      } catch (const out_of_range &e) {
        // out_of_range exception if books.erase throws it
        cout << "Error! Book with that index does not exist." << endl;
      } catch (...) {
        // Catch other unexpected exceptions
        cout << "Error! An unexpected error occurred." << endl;
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
  books.push_back(std::make_unique<TextBook>(
      "C++ Crash Course", "Josh Lospinoso", 2019, "987654321", 59.99, 20, 1));

  menu(books);
  return 0;
}

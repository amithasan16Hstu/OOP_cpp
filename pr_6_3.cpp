#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    double price;
    string publisher;
    int stock;

public:
    // Constructor to initialize book details and stock
    Book(string _title, string _author, double _price, string _publisher, int _stock) {
        title = _title;
        author = _author;
        price = _price;
        publisher = _publisher;
        stock = _stock;
    }

    // Function to check if a book is available and handle the purchase
    void checkAvailability() {
        string searchTitle, searchAuthor;
        cout << "Enter the title of the book: ";
       cin >> searchTitle;
        cout << "Enter the author of the book: ";
        cin >> searchAuthor;

        if (searchTitle == title && searchAuthor == author) {
            int copies;
            cout << "Book Found! Details:" << endl;
            displayDetails();
           cout << "Enter the number of copies required: ";
            cin >> copies;

            if (copies <= stock) {
                double totalCost = copies * price;
               cout << "Total cost for " << copies << " copies: $" << totalCost << endl;
                stock -= copies;
            } else {
                cout << "Required copies not in stock." << endl;
            }
        } else {
            cout << "Book not found in the inventory." << endl;
        }
    }

    // Function to display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
       cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << " copies" << endl;
    }
};

int main() {
    // Create book objects using the constructor
    Book book1("Book Title 1", "Author 1", 19.99, "Publisher A", 10);
    Book book2("Book Title 2", "Author 2", 14.99, "Publisher B", 5);
    Book book3("Book Title 3", "Author 3", 24.99, "Publisher C", 15);

    // Search for books and handle purchases
    book1.checkAvailability();
    book2.checkAvailability();
    book3.checkAvailability();

    return 0;
}

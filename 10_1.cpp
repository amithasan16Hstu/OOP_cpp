#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_ITEMS = 100;

struct Item {
    string name;
    string code;
    double cost;
};

void clearInputBuffer() {
    while (cin.get() != '\n') {
        // Clear characters from the input buffer until a newline is encountered
    }
}

int main() {
    Item items[MAX_ITEMS];
    int itemCount;

    // Prompt for the number of items
    cout << "Enter the number of items: ";
    cin >> itemCount;
    clearInputBuffer(); // Clear the newline character from the input buffer

    // Read item details
    for (int i = 0; i < itemCount; ++i) {
        Item& item = items[i];
        cout << "Item " << i + 1 << ":\n";

        // Read item name
        cout << "  Enter item name: ";
        getline(cin, item.name);

        // Read item code
        cout << "  Enter item code: ";
        getline(cin, item.code);

        // Read item cost
        cout << "  Enter item cost: ";
        cin >> item.cost;
        clearInputBuffer(); // Clear the newline character from the input buffer
    }

    // Print the header
   cout << left << setw(20) << "Item Name" << setw(15) << "Item Code" << right << setw(10) << "Cost" << "\n";
    cout << setfill('-') << setw(45) << "-" << setfill(' ') << "\n";

    // Print item details
    cout <<fixed << showpoint << setprecision(2);
    for (int i = 0; i < itemCount; ++i) {
        Item& item = items[i];
       cout << left << setw(20) << item.name << setw(15) << item.code << right << setw(10) << item.cost << "\n";
    }

    return 0;
}

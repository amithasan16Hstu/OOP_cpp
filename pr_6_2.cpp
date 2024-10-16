#include <iostream>
#include <cstring>
using namespace std;
class String {

    char* str;

public:
    // Default constructor for uninitialized string objects
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    // Constructor to initialize an object with a string constant
    String(const char* initialStr) {
        str = new char[strlen(initialStr) + 1];
        strcpy(str, initialStr);
    }

    // Destructor to free memory
    ~String() {
        delete[] str;
    }

    // Function to concatenate two strings and return a new String object
    String concatenate(const String& other) const {
        int newLength = strlen(str) + strlen(other.str);
        char* tempStr = new char[newLength + 1];
        strcpy(tempStr, str);
        strcat(tempStr, other.str);
        String result(tempStr);
        delete[] tempStr;
        return result;
    }

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    // Create uninitialized string object s1
    String s1;

    // Create string object s2 with a string constant
    String s2("Well done!");

    // Concatenate s1 and s2 to create s3
    String s3 = s1.concatenate(s2);

    // Display the string objects
    std::cout << "s1: ";
    s1.display();

    std::cout << "s2: ";
    s2.display();

    std::cout << "s3: ";
    s3.display();

    return 0;
}

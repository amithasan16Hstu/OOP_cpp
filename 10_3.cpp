#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string text;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    std::cout << "Enter text (Ctrl+D on a new line to end input):\n";

    // Read text from the keyboard
    while (std::getline(std::cin, text)) {
        lineCount++;

        // Count characters and words in the line
        charCount += text.length();
        bool inWord = false;

        for (char c : text) {
            if (std::isspace(c)) {
                inWord = false;
            } else if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }

    // Output the results in two columns
    std::cout << std::left << std::setw(20) << "Number of Lines:" << std::right << std::setw(5) << lineCount << "\n";
    std::cout << std::left << std::setw(20) << "Number of Words:" << std::right << std::setw(5) << wordCount << "\n";
    std::cout << std::left << std::setw(20) << "Number of Characters:" << std::right << std::setw(5) << charCount << "\n";

    return 0;
}

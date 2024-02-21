#include <iostream>
#include <string>
#include <limits>

// Function to replace all occurrences of a character in a string
void replaceCharacter(std::string& str, char replaceChar) {
    for (char& c : str) {
        if (c == replaceChar) {
            c = '_';
        }
    }
}

int main() {
    std::string inputString;

    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, inputString);

        if (inputString.empty()) {
            std::cout << "Invalid input. Please enter a valid string." << std::endl;
            continue;
        }

        std::string replaceInput;
        std::cout << "Enter character to replace or 'stop': ";
        std::cin >> replaceInput;

        if (replaceInput == "stop") {
            break;
        }

        if (replaceInput.length() != 1) {
            std::cout << "Invalid input. Please enter a single character or 'stop'." << std::endl;
            continue;
        }

        char replaceChar = replaceInput[0];

        replaceCharacter(inputString, replaceChar);

        std::cout << "Result: " << inputString << std::endl;

        // Consume the newline character left in the buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Program ended." << std::endl;

    return 0;
}

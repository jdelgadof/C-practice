#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    std::cout << "How many numbers do you want to enter? ";
    int count;
    std::cin >> count;

    for (int i = 1; i <= count; ++i) {
        int num;
        std::cout << "Enter nr[" << i << "]: ";
        std::cin >> num;
        numbers.push_back(num);
    }

    // Print the numbers in the vector
    std::cout << "You entered: ";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}


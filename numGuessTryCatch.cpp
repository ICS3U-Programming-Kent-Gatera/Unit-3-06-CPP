// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 17 - 22
// This program checks if the user given integer.

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function uses a try statement
    std::string userIntegerAsString;
    int integerAsNumber;
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter a number: ";
    std::cin >> userIntegerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(userIntegerAsString);
        std::cout << "That number as an integer is " << integerAsNumber
         << std::endl;
        if (integerAsNumber == someRandomNumber) {
            std::cout << "Your guess is correct!";
        } else {
            std::cout << "Your guess is wrong!";
            std::cout << " It was ";
            std::cout << someRandomNumber;
        }
    } catch (std::invalid_argument) {
        std::cout << userIntegerAsString << " is not an integer.\n";
    }
    }

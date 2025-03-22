// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 21 2025
// The code is a guess random number game
// The code generates a random number, the user has to guess it
// The code will base his answer using an if else statement

// this library is to generate the random numbers

#include <cstdlib>
#include <iostream>

int main() {
    // declare random number and the guess from the user as an integer
    int random_number;
    int guess_number;

    // Initialize random seed
    srand((unsigned)time(NULL));

    // generate a random number from 1 to 10
    random_number = rand() % 10 + 1;

    // Get user guess as an integer
    std::cout << "Guess a random number from 1 to 10: ";
    std::cin >> guess_number;

    // If statement for the right answer
    if (random_number == guess_number) {
        std::cout << "You are correct" << std::endl;
    } else {
        // Else statement for the wrong answer and the correct answer
        std::cout << "You are wrong, the correct answer was: "
                  << random_number << std::endl;
    }

    return 0;
}

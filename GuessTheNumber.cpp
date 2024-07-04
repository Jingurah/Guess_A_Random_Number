#include "pch.h"
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

void playGame() {
    int randomNumber, guess, attempts = 3;
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    randomNumber = rand() % 15 + 1; // Random number between 1 and 15

    std::cout << "Guess the number between 1 and 15. You have 3 attempts.\n";

    for (int i = 1; i <= attempts; ++i) {
        std::cout << "Attempt " << i << ": ";
        std::cin >> guess;

        if (guess == randomNumber) {
            std::cout << "Congratulations! You guessed the number.\n";
            return;
        }
        else if (guess > randomNumber) {
            std::cout << "Too high!\n";
        }
        else {
            std::cout << "Too low!\n";
        }
    }

    std::cout << "Sorry, you've used all attempts. The number was " << randomNumber << ".\n";
}

int main() {
    char playAgain;
    do {
        playGame();
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!\n";
    return 0;
}

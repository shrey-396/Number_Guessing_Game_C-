#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Main game loop
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number!" << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    std::cout << "Thank you for playing the Number Guessing Game!" << std::endl;
    return 0;
}

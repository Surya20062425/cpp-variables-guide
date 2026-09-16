#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(std::time(nullptr));
    int target = std::rand() % 100 + 1, guess = 0;
    std::cout << "Guess the number (1-100): ";
    while (std::cin >> guess && guess != target) {
        std::cout << (guess < target ? "Too low. " : "Too high. ") << "Try again: ";
    }
    std::cout << "Correct!" << std::endl;
    return 0;
}
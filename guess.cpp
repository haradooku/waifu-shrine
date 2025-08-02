#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // setup
    srand(time(0)); //seed rng
    int secret = rand() % 100 + 1; //random # 1-100
    int guess = 0;
    int tries = 0;

    std::cout << "i'm thinking of a number between 1-100.\n";

    // game loop
    while(guess != secret) {
        std::cout << "your guess: ";
        std::cin >> guess;
        tries++;

        if(guess > secret) std::cout << "too high! \n";
        else if(guess < secret) std::cout << "too low! \n";

        if(tries >= 5) {
            secret = rand() % 100 + 1;  // reshuffle existing secret
            tries = 0;                  // reset try counter
            std::cout << "Number changed after 5 tries! New number generated.\n";
        }
        
    }

    std::cout << "Correct you win in " << tries << " guesses!\n";
    return 0;

}
#include <iostream>
#include <string>
#include <algorithm>

std::string jumble(std::string word) {
    std::random_shuffle(word.begin(), word.end());
    return word;

}

int main(){
    std::string words [] = {"hello", "coding", "computer", "keyboard", "program"};
    int index = rand() % 5; //randomw ord

    std::string secret = words[index];
    std::string scrambled = jumble(secret);

    std::cout << "Unscramble: " << scrambled << "\n";

    std::string guess;
    while(guess != secret) {
    std::cout << "Your answer: ";
    std::cin >> guess;


    }

    std::cout << "You got it!\n";
    return 0;



}
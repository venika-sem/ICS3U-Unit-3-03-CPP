// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program guess random number

#include <iostream>
#include <random>

int main() {
    int randomNumber;
    int guess;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> guess;
    std::cout << std::endl;

    // process & output
    if (guess == randomNumber) {
        std::cout << "Congratulations, you guessed correct!" << std::endl;
    } else {
        std::cout << "Sorry you guessed wrong, the number was "
                  << ""
                  << randomNumber << "" << std::endl;
    }
    std::cout << "\nDone.";
}

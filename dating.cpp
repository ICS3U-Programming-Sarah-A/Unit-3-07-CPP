// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Apr 6th, 2022
// This program uses compound boolean expressions
// to determine if the grandparents will
// allow the user to date their grandchild.

#include <iostream>
#include <random>
#include <string>

int main() {
    // declare variables
    int ageAsInt;
    std::string ageAsString;

    // get number guessed from user
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;
    std::cout << "" << std::endl;

    try {
        // convert the user's guess from string to an int
        ageAsInt = std::stoi(ageAsString);
        std::cout << "" << std::endl;

        // check if the number guess is the same as random number
        if (ageAsInt <= 40 && ageAsInt >= 25) {
            std::cout << "You can date our grandchild.";
        } else if (ageAsInt > 40) {
            std::cout << "You are too old to date our grandchild.";
        } else if (ageAsInt > 0 && ageAsInt < 25) {
                std::cout << "You are too young to date our grandchild.";
        } else {
            std::cout << "Please enter a valid age\n";
    }

        // checks to see if user entered a valid number
    } catch (std::invalid_argument) {
        // user did not enter an integer.
        std::cout << "Please enter a valid age.\n";
        std::cout << "" << std::endl;
    }
}

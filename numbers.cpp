// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program rounds a number to a user-specific decimal place

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>


void decimalRound(float &userFloat, float decimal) {
    // This program rounds a number to a user-specific decimal place

    // process
    userFloat = userFloat * pow(10, decimal) + 0.5;
    userFloat = static_cast<int>(userFloat);
    userFloat = userFloat / pow(10, decimal);
}

int main() {
    // this function gets user input
    std::cout << "This program rounds a number to a specific decimal place."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string userInput;
    float userNum;
    std::string decInput;
    float decInt;

    // input
    while (true) {
        try {
            std::cout << "Enter the number you want to round: ";
            std::cin >> userInput;
            userNum = std::stof(userInput);
            std::cout << "Enter how many decimal places you want to round by: ";
            std::cin >> decInput;
            decInt = std::stof(decInput);
            std::cout << "" << std::endl;

            decimalRound(userNum, decInt);

            break;
        } catch (std::invalid_argument) {
            std::cout << "Enter a number for both values, try again."
                      << std::endl;
        }
    }

    // output
    std::cout << userInput << " rounded to " << decInt << " decimal places is "
              << userNum << std::endl;
     std::cout << "\nDone." << std::endl;
    
}

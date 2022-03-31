// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program says the sign of an integer

#include <iostream>

int main() {
    // This function says the sign of an integer

    int number;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> number;


    // Process & Output
    std::cout << "" << std::endl;
    if (number > 0) {
        std::cout << number << " is possitive!";
    } else {
        if (number < 0) {
            std::cout << number << " is negative!";
        } else {
            std::cout << number << " is zero!";
        }
    }

    std::cout << "\nDone" << std::endl;
}

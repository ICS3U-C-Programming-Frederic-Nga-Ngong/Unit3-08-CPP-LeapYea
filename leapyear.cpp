// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Tell the user if he can date my grandchild or not.
#include<iostream>
#include <string>

int main() {
    int year_int;
    std::string year_str;

    std::cout << "Enter a year\n";
    std::cin >> year_str;


    try {
        year_int = std::stoi(year_str);

        if (year_int%4 == 0) {
            if (year_int%100 == 0) {
                if (year_int%400 == 0) {
                    std::cout << year_int << " is a leap year";
                } else {
                    std::cout << year_int << " is not a leap year";
                }
            } else {
                std::cout << year_int << " is a leap year";
            }
        } else {
            std::cout << year_int << " is not a leap year";
        }
    } catch(std::invalid_argument) {
        std::cout << year_str << " is not a valid year";
    }
    std::cout << "\nThanks for using the code\n";
}

// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// this is a mark averager

#include <iostream>
#include <list>


int Calculate(std::list<int> percentageList) {
    // this function calculates the average of percentages

    std::list<int> listSize;
    int sum = 0;
    int avgRes;

    // process
    for (int aMark : percentageList) {
        sum += aMark;
    }
    avgRes = sum / percentageList.size();

    return avgRes;
}

int main() {
    // this function creates a list and lets the user enter their marks

    std::list<int> percentages;
    std::string percentage = "";
    int percentInt;
    int calculatedAverage;

    // input & output
    std::cout << "Enter Your Marks (%) ";
    std::cin >> percentage;

    try {
        percentInt = std::stoi(percentage);
        percentages.push_back(percentInt);
        if (percentInt < -1) {
            std::cout << "\nInvalid Number (Too Low)"
            << std::endl;
        } else if (percentInt > 103) {
            std::cout << "\nnvalid Number (Too High)"
            << std::endl;
        } else {
            while (true) {
                if (percentInt < -1) {
                    std::cout << "\nInvalid Number (Too Low)"
                    << std::endl;
                    break;
                }
                if (percentInt > 103) {
                    std::cout << "\nInvalid Number (Too High)"
                    << std::endl;
                    break;
                }
                if (percentInt == -1) {
                    break;
                }
                std::cout << "Mark (%) ";
                std::cin >> percentage;
                percentInt = std::stoi(percentage);
                percentages.push_back(percentInt);
            }
            percentages.pop_back();
            calculatedAverage = Calculate(percentages);
            std::cout << "\nYour average mark percentage is "
            ""<< calculatedAverage
            << "%" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Number!";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}

#include <iostream>
#include <fstream>
#include "UnsortedList.h"

int main() {
    UnsortedList myList;

    std::string inputFileName, outputFileName, testName, command;
    std::ifstream inputFile;
    std::ofstream outputFile;

    std::cout << "Enter input file name: ";
    std::cin >> inputFileName;
    inputFile.open(inputFileName);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    std::cout << "Enter output file name: ";
    std::cin >> outputFileName;
    outputFile.open(outputFileName);

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    std::cout << "Enter test name: ";
    std::cin >> testName;

    while (inputFile >> command) {
        if (command == "GetLength") {
            int length = myList.GetLength();
            std::cout << "Length: " << length << std::endl;
            outputFile << "Length: " << length << std::endl;
        } else if (command == "PutItem") {
            int item;
            inputFile >> item;
            myList.PutItem(item);
        } else if (command == "PrintList") {
            myList.PrintList();
        } else if (command == "GetItem") {
            int item;
            inputFile >> item;
            bool found = myList.GetItem(item);
            std::cout << "Item found: " << (found ? "Yes" : "No") << std::endl;
            outputFile << "Item found: " << (found ? "Yes" : "No") << std::endl;
        } else if (command == "IsFull") {
            bool isFull = myList.IsFull();
            std::cout << "Is Full: " << (isFull ? "Yes" : "No") << std::endl;
            outputFile << "Is Full: " << (isFull ? "Yes" : "No") << std::endl;
        } else if (command == "DeleteItem") {
            int item;
            inputFile >> item;
            myList.DeleteItem(item);
        } else if (command == "MakeEmpty") {
            myList.MakeEmpty();
        } else if (command == "Quit") {
            break;
        } else {
            std::cout << command << " is not a valid command" << std::endl;
            outputFile << command << " is not a valid command" << std::endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
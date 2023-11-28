#include <iostream>
#include <fstream>
#include <string>
#include "PQType.h"

using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string inputFilename, outputFilename, command;
    int maxItems, item;

    cout << "Enter input file name: ";
    cin >> inputFilename;
    inputFile.open(inputFilename);

    cout << "Enter output file name: ";
    cin >> outputFilename;
    outputFile.open(outputFilename);

    inputFile >> maxItems;

    // Create a priority queue of integers with capacity maxItems.
    PQType<int> pq(maxItems);

    while (inputFile >> command)
    {
        if (command == "Enqueue")
        {
            // Read the integer to be enqueued.
            inputFile >> item;
            try
            {
                // Enqueue the integer.
                pq.Enqueue(item);
            }
            catch (const char* msg)
            {
                // Output an error message if the priority queue is full.
                outputFile << msg << endl;
            }
        }
        else if (command == "Dequeue")
        {
            try
            {
                // Dequeue the highest-priority item.
                pq.Dequeue(item);
                // Output the dequeued item to the output file.
                outputFile << item << endl;
            }
            catch (const char* msg)
            {
                // Output an error message if the priority queue is empty.
                outputFile << msg << endl;
            }
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

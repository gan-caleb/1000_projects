#include <iostream>
#include <vector>
#include "gradecalc.h"
using namespace std;

/**
 * @file main.cpp
 * @brief Entry point for the Grade Calculator app.
 */
int main() {
    // Define GLOBAL variables
    vector<int> grades;
    int input;
    bool finishedInput = false;

    // while loop to get user input
    while(finishedInput == false) {
        cout << "Input each grade 1 by 1 and press ENTER: " << "\n";
        cin >> input;

        // Use cin.fail to handle anything that is NOT an integer
        if (cin.fail()) {
            cout << "Please enter a valid integer.\n" << endl;
            cin.clear();  // reset cin fail state
            cin.ignore(10000, '\n');  // flush bad input from buffer
        
        // Check if integer is in range
        } else if (input >= -1 && input <= 100) {
            grades.push_back(input);

        } else {
            cout << "Out of range.\n";
        }

        if (input == -1) {
            finishedInput = true;
            // Remove -1 from array (last element)
            grades.erase(grades.begin() + (grades.size() - 1));
        }
    }
    // if input is done, run the functions and print the results
    if (finishedInput) {
        double average = calculateAverage(grades);
        int max = findMax(grades);
        int min = findMin(grades);

        cout << "Average grade: " << average << "\n";
        cout << "Highest grade: " << max << "\n";
        cout << "Lowest grade: " << min << "\n";
    }

    return 0;
}


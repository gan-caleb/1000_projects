#include <iostream>
#include <vector>
#include "gradecalc.h"
using namespace std;

int main() {

/*
### Pseudocode ###
Ask for user input and store in list
Then, perform each function on list
Print results
*/
    // Define GLOBAL variables
    vector<int> grades;
    int input;
    bool finishedInput = false;

    // while loop to get user input
    while(finishedInput == false) {

        cout << "Input each grade 1 by 1 and press ENTER: ";
        cin >> input;

        if (cin.fail()) {
            cout << "Invalid. Please enter a valid number from 0 to 100.";
            cin.clear();
            cin.ignore(input);

        } else if (input >= -1 && input <= 100) {
            grades.push_back(input);

        } else {
            cout << "Out of range";
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
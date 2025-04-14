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
        // store user input into array
        grades.push_back(input); 
        if (input == -1) {
            finishedInput = true;
        }
    }

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
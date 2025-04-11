#include <iostream>
#include <vector>
#include "gradecalc.h"
using namespace std;

int main() {

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

    return 0;
}
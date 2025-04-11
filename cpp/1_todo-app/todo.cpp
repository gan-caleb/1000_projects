/*
Essentially, the idea is, the app will program will revolve around a singular "tasks.txt" file
which handles the tasks on the list. The program just removes and adds things to the list and
loads it everytime.
*/

#include "todo.h"
#include <fstream>

// Constructor
Task::Task(string desc) {
    description = desc;
    completed = false;
}

void loadTasks(vector<Task>& tasks) {
    // open tasks file (if it exists)
    ifstream TaskFile("tasks.txt");
    string line;
    while (getline(TaskFile, line)) {
        
    }
    
}

void saveTasks(const vector<Task>& tasks) {
    // Save user input to "tasks.txt" file
}



void displayTasks(const vector<Task>& tasks) {
    // Read loaded tasks.txt file
    // cout what is in the file
    
}

void deleteTask(vector<Task>& tasks) {
    ofstream TaskFile("tasks.txt");
    
}



void addTask(vector<Task>& tasks) {
    // Load tasks.txt file and add line
}



void markComplete(vector<Task>& tasks) {
    
}
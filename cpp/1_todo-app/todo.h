#ifndef TODOLIST_H
#define TODOLIST_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;  // Description of task
    bool completed;  // Task completed yes/no
    Task(string desc);  // Constructor declaration
};

// All the functions being used for a typical todo app
void loadTasks(vector<Task>& tasks);  // Using & to reference the data and not make a copy of it reduces memory usage
void saveTasks(const vector<Task>& tasks);  // For functions that do not need data to be changed, set as const to prevent accidental modifying
void displayTasks(const vector<Task>& tasks);  
void deleteTask(vector<Task>& tasks);
void addTask(vector<Task>& tasks);
void markComplete(vector<Task>& tasks);

#endif

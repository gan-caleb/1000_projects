/*
This program allows the user to input grades and receive insights from the given set such as
- average 
- max
- min
*/


#ifndef GRADECALC_H
#define GRADECALC_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

double calculateAverage(const vector<int>& grades);  // average
int findMin(const vector<int>& grades);  // min
int findMax(const vector<int>& grades);  // max

#endif


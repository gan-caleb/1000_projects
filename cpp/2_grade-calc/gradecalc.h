/**
 * @file gradecalc.h
 * @brief Header file for grade calculation functions.
 * @author Caleb Gan
 * @version 1.0
 * @date 2025-04-14
 */

#ifndef GRADECALC_H
#define GRADECALC_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
 * @brief Calculates the average of a list of grades.
 * 
 * @param grades A vector of integers representing grades.
 * @return double The average score.
 */
double calculateAverage(const vector<int>& grades);  // average

/**
 * @brief Calculates the lowest value in the list of grades
 * 
 * @param grades A vector of integers representing grades.
 * @return int One singular score
 */
int findMin(const vector<int>& grades);  // min

/**
 * @brief Calculates the highest value in a list of grades
 * 
 * @param grades A vector of integers representing grades.
 * @return int One singular score
 */
int findMax(const vector<int>& grades);  // max

#endif


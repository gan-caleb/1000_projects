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
 * @return int The min score.
 */
int findMin(const vector<int>& grades);  // min

/**
 * @brief Calculates the highest value in a list of grades
 * 
 * @param grades A vector of integers representing grades.
 * @return int The max score.
 */
int findMax(const vector<int>& grades);  // max

/**
 * @brief Converts the average score into a letter grading
 * 
 * @param average Of type double for the average score
 * @return char The letter grading
 */
char letterGrade(double average)

#endif


#include "gradecalc.h"
#include <numeric>

double calculateAverage(const vector<int> grades) {
    // Use accumulate function (start, end, init)
    double average = accumulate(grades.begin(), grades.end(), 0);
    return average;
}
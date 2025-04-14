#include "gradecalc.h"
#include <numeric>
#include <algorithm>

double calculateAverage(const vector<int>& grades) {
    // Use accumulate function (start, end, init)
    int size = grades.size();
    double averageGrade = accumulate(grades.begin(), grades.end(), 0)/size;
    return averageGrade;
}

int findMax(const vector<int>& grades) {
    // Use max_element (range start and end)
    int maxGrade = *max_element(grades.begin(), grades.end());
    return maxGrade;
}

int findMin(const vector<int>& grades) {
    // Use min_element
    int minGrade = *min_element(grades.begin(), grades.end());
    return minGrade;
}


#include <vector>
#include <algorithm>
#include <climits>

#pragma once

    #pragma once
class TapeEquilibrium
{
public:
    int solution(std::vector<int>& A) {
        int minDiff = INT_MAX;
        int totalSum = 0;
        int leftSum = 0;
 
        for (int num : A) {
            totalSum += num;
        }

        for (size_t i = 0; i < A.size() - 1; i++) {
            leftSum += A[i];
            int rightSum = totalSum - leftSum;
            int diff = std::abs(leftSum - rightSum);
            minDiff = std::min(minDiff, diff);
        }
        return minDiff;
    }
};
#pragma once
#include <algorithm>
#include <vector>

class CodilityDemoTest
{
public:
    static int solution(std::vector<int>& A) {
        std::ranges::sort(A.begin(), A.end());
        int positiveSmallestNumber = 1;
        for (const auto& num : A)
        {
            if (num == positiveSmallestNumber)
            {
                positiveSmallestNumber++;
            }
        }
        return positiveSmallestNumber;
    }
};


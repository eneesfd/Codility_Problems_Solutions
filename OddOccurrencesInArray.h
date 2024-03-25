#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class OddOccurrencesInArray
{
public:
	OddOccurrencesInArray();
    int solution(std::vector<int>& A) {
        std::sort(A.begin(), A.end());
        for (int i = 0; i < A.size() - 1; i += 2) {
            if (A[i] != A[i + 1]) {
                return A[i];
            }
        }
        return A[A.size() - 1];
    }
	~OddOccurrencesInArray();
};
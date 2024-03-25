#pragma once

#include <vector>
#include <algorithm>

class PermMissingElem
{
public:
    static int solution(std::vector<int>& A) {
        sort(A.begin(), A.end());
        int ctr = 1;
        for (size_t i = 0; i < A.size(); i++) {
            if (ctr != A[i])
                return ctr;
            ++ctr;
        }
        return ctr;
    }
};
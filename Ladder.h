#pragma once
#include <vector>

class Ladder {
public:
    static std::vector<int> solution(std::vector<int>& A, std::vector<int>& B) {
        std::vector<int> fibonacci(50000);
        fibonacci[0] = 1;
        fibonacci[1] = 2;
        for (size_t i = 2; i < 50000; ++i)
        {
            fibonacci[i] = (fibonacci[i - 2] + fibonacci[i - 1]) % static_cast<int>(pow(2, 30)); // mod 2^30 to prevent overflow
        }

        std::vector<int> result(A.size());
        for (size_t i = 0; i < A.size(); ++i)
        {
            result[i] = fibonacci[A[i] - 1] % static_cast<int>(pow(2, B[i]));
        }
        return result;
    }
};

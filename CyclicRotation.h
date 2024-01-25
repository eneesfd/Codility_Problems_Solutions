#pragma once
#include <vector>

class CyclicRotation
{
public:
	static std::vector<int> solution(std::vector<int>& A, int K)
	{
		int N = A.size();
		if (N == 0) return A;

		K = K % N;

		if (K == 0 || N == K) return A;


		std::vector<int> result(N);
		for (int i(0) ; i < N ; ++i)
		{
			result[(i + K) % N] = A[i];
		}
		return result;
	}
};

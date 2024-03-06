#pragma once
#include <algorithm>
#include <numeric>
#include <vector>

class MinMaxDivision
{
	 bool check(int mid, int K, const std::vector<int>& A)
	 {
		int sum = 0;
		int blocks = 1;
		for (int i = 0; i < A.size(); i++)
			if (sum + A[i] > mid)
			{
				sum = A[i];
				blocks++;
				if (blocks > K)
				{
					return false;
				}
			}else
			{
				sum += A[i];
			}
		return true;
	}
	int solution(int K, int M, std::vector<int>& A) {
		int lower = *std::ranges::max_element(A.begin(), A.end());
		int upper = std::accumulate(A.begin(), A.end(), 0);
		if (K == 1) return upper;
		if (K >= A.size()) return lower;
		while (lower < upper)
		{
			int mid = (lower + upper) / 2;
			if (check(mid,K,A))
			{
				upper = mid;
			}
			else
			{
				lower = mid + 1;
			}
		}
		return lower;
	}
};


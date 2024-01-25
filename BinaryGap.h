#pragma once

#include <iostream>
#include <bitset>

class BinaryGap
{
public:
	static int solution(int N) {
		int max_gap(0);
		int current_gap(0);
		bool counting(false);

		std::string binary;
		while (N != 0) { binary += (N % 2 == 0 ? "0" : "1"); N /= 2; }

		for (const char& bit : binary)
		{
			if(bit == '1')
			{
				if(counting && current_gap > max_gap)
				{
					max_gap = current_gap;
				}
				counting = true;
				current_gap = 0;
			}else if (counting)
			{
				current_gap++;
			}
		}
		return max_gap;
	}
};

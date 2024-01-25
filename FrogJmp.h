#pragma once

class FrogJmp
{
public:
	static int solution(int X, int Y, int D) {
		int road = Y - X;
		int result = road / D;
		if (road % D != 0) {
			result++;
		}
		return result;
	}
};

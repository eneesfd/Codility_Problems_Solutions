#include <iostream>

#include "BinaryGap.h"
#include "CyclicRotation.h"
#include "FrogJmp.h"
#include "Ladder.h"
#include "MaxCounters.h"


int main()
{
	std::vector<int> a{ 4,4,5,5,1};
	std::vector<int> b{ 3,2,4,3,1};

	Ladder::solution(a, b);
}

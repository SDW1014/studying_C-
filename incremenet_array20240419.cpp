#include "incremenet_array20240419.h"

void incrementArray(std::vector<int>& arr, int startIdx, int endIdx)
{
	for (int i = startIdx; i < endIdx; i++)
	{
		arr[i]++;
	}
}

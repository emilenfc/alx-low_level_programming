#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (idx < size)
	{
		printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}

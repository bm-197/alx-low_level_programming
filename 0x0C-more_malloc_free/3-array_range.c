#include "main.h"

/**
 * array_range -  creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer NUll
 */

int *array_range(int min, int max)
{
	int i, n, *nums;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	nums = malloc(sizeof(int) * (n));

	if (nums == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; min++, i++)
	{
		nums[i] = min;
	}
	nums[i] = '\0';

	return (nums);
}

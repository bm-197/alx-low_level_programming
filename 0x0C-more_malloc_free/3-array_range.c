#include "main.h"

/**
 * array_range -  creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer NUll
 */

int *array_range(int min, int max)
{
	int i, n;
	int *nums;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	nums = malloc(sizeof(int) * n);

	if (nums == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		nums[i] = min++;
	}
	return (nums);
}

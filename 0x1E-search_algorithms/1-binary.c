#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, m;

	if (array == NULL)
	{
		return -1;
	}
	while (left < right)
	{
		size_t i;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (left + right) / 2;
		if (array[m] < value)
		{
			left = m + 1;
		}
		else if ( array[m] > value)
		{
			right = m - 1;
		}
		else
			return m;
		
	}
	return -1;

}
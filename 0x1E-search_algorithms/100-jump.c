#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the nubmer of elements in array
 * @value: the value to search for
 * 
 * Return: first index where value is located, or -1
 * if value is not present in array or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, i;
	size_t r = sqrt(size);
	if (array == NULL)
		return -1;
	while (array[min(r, size)] < value)
	{
		l = r;
		r = r + sqrt(size);
		if (l >= size)
			return -1;
	}
	for (i = r; i <= l; i--)
	{
		if ( array[i] ==  value)
			return i;
	}
	return -1;
}
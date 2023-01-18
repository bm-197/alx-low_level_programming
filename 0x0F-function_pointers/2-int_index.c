#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be printed
 * @size: size of the array
 * @cmp: pointer to the function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (index);
	}
	if (size <= 0)
		return (-1);
}

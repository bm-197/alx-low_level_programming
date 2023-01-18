#include "function_pointer.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array to be printed
 * @size: size of the array
 * @action: a pointer to the function that prints the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

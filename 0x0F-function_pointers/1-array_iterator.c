#include "function_pointer.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array to be printed
 * @size: size of the array
 * @action: a pointer to the function that prints the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: parameter
 * @n: parametrer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, c;

	for (; i < (n - 1) / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}

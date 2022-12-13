#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print up to 98 in ascending order
 * @n: first number
 */

int print_to_98(int n)
{
	for (n, n <= 98, n++)
	{
		pritnf('%d', n);
		printf(', ');
	}
	printf('\n');
}

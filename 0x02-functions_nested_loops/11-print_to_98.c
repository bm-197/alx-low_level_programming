#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print up to 98 in ascending order
 * @n: first number
 */

void print_to_98(int n)
{
	int n;

	while (n <= 98)
	{
		printf('%d', n);
		printf(',');
		printf(' ');
	}
	printf('\n');
}

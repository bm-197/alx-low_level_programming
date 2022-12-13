#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print up to 98 in ascending order
 * @n: first number
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}

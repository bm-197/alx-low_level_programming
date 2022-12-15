#include "main.h"

/**
 * print_line - draw a straight line
 * @n - size of the line
 */

void print_line(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - draw diagonal
 * @n: size of diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			for (j =1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}

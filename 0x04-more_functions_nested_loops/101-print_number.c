#include "main.h"

/**
 * print_number - prints integer
 * @n: parameter
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	while (i / 10)
	{
		_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}


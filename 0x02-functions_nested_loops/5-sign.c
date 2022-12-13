#include "main.h"

/**
 * print_sign - sign of a number
 * @n: the number to be checked
 * Return: 1 (greater than zero), 0 (is zero), -1 (less than 0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

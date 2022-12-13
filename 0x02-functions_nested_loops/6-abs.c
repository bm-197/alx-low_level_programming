#include "main.h"

/**
 * _abs - compute absolute value
 * @n: value to be computed
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if ( n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n * -1);
	}
	return (0)
}

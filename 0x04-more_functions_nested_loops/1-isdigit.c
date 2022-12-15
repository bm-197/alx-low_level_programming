#include "main.h"

/**
 * _isdigit - check digit
 * @c: parameter to be checked
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar(c);
		_putchar(':');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		return (0);
	}
}

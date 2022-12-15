#include "main.h"

/**
 * _isupper - check uppercase
 * @c: character to be checked
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
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
	_putchar('\n');
}

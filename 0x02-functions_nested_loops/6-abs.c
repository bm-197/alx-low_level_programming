#inclue "main.h"

/**
 * _abs - compute absolute value
 * @n: value to be computed
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
}

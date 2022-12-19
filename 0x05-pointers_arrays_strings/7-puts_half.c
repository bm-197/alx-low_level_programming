#include "main.h"

/**
 * puts_half - prints half of the string
 * @str - parametr to be printed
 */

void puts_half(char *str)
{
	int s, a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	s = a - 1;
	for (s = 0; s == a /2; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

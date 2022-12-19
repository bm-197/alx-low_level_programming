#include "main.h"

/**
 * puts_half - prints half of the string
 * @str - parametr to be printed
 */

void puts_half(char *str)
{
	int a = 0, s;

	while (str[a] != '\0')
	{
		a++;
	}

	s = a / 2;
	for (s; *str != '\0'; s++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

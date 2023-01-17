#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parametr to be printed
 */

void puts_half(char *str)
{
	int a = 0, s;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
		s = a / 2;
	else
		s = (a - 1) / 2;

	for (; s <+ a; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}

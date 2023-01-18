#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parametr to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0, a = 0, s;

	while (str[index++])
	{
		a++;
	}
	if (a % 2 == 0)
		s = a / 2;
	else
		s = (a + 1) / 2;

	for (index = s; index < a; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

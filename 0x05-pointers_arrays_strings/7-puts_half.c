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
		if (a + 1 % 2 != '0')
		{
			s = (a - 1) /; 
		}
		else
		{
			s = a /2
		}
		s++
	}
	for (a = s; str[s] != 'f\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

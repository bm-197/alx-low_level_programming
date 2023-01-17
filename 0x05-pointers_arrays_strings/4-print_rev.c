#include "main.h"

 /**
  * print_rev - print string in a reverse
  * @s: parameter
  * Return: void
  */

void print_rev(char *s)
{
	int a = 0, c;

	while (s[a] != '\0')
	{
		a++;
	}
	a = a - 1;
	for (c = a; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

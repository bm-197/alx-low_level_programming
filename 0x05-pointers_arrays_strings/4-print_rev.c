#include "main.h"
 /**
  * print_rev - string in a rev
  * @s: parameter
  * Return: nothing
  */

void print_rev(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; b++, c--)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
	_putchar('\n');
}



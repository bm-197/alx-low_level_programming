#include "main.h"
 /**
  * print_rev - string in a rev
  * @s: parameter
  * Return: nothing
  */

void print_rev(char *s)
{
	*s = '\0';

	for ( ; *s--;)
	{
		_putchar(*s);
	}
	_putchar('\n');
}



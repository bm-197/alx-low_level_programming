#include "main.h"

 /**
  * print_rev - print string in a reverse
  * @s: parameter
  * Description: prints string in reverse to stdout
  * Return: nothing
  */

void print_rev(char *s)
{
	int a = 0, c;

	while (s[a] != '\0')
	{
		a++;
	}
	for (c = a - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}



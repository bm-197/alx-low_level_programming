#include "main.h"

/**
 * puts2 - prints every other character
 * @str: parameter
 */

void puts2(char *str)
{
	for (; *str != '\0'; str = str + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

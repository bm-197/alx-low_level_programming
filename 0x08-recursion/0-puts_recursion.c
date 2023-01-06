#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: parametr
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_putchar(*s);
	s++;
	_puts_recursion(*s);
}

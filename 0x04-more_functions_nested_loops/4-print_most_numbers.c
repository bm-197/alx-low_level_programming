#include "main.h"

/**
 * print_most_numbers - print number
 */

void print_most_number(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{	
			i++
		}
		_putchar(i);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * more_numbers - prints from 0 to 9 except 2 and 4
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j);
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			
		}
		_putchar('\n');	
	}
}

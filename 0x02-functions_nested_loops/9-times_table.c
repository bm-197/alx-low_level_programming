#include "main.h"

/**
 * times_table - times table
 * Return: void
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if ((p < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((p % 10 ) + '0');
			}
			else
			{
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

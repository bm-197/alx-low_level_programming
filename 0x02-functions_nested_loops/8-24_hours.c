#include "main.h"

/**
 * jack_baure - print every minute of the day
 */

void jack_bauer(void)
{
	int i, j;
	for (i = 0; i <= 2; i++)
	{
		_putchar(i);
		for (j = 0; j <= 3; j++)
		{
			_putchar(j);
			_putchar(':');
			_putchar('\n');
		}
	}

}

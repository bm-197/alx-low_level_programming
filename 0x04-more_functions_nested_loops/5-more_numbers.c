#include ""main.h"

/**
 * more_numbers - prints from 0 to 9 except 2 and 4
 */

void more_numbers(void)
{
	char i, c;

	for (c = 0; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > = 10)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(i);
			}
		}
		_putchar('\n');	
	}
}

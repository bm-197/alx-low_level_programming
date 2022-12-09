#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = '0';
	int num2 = '0';
	int num3 = '0';

	for (num3 = '0'; num3 <= '9'; num3++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num1 = '0'; num1 <= '9'; num1++)
			{
				if (!((num1 == num2) || (num2 == num3) ||
							(num2 > num1) || (num3 > num2)))
				{
					putchar(num3);
					putchar(num2);
					putchar(num1);
					if (!(num1 == '9' && num3 == '7' && num2 == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


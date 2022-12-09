#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (!((num1 == num2) || (num1 > ones)))
			{
				putchar(num1);
				putchar(num2);
				if (!(num2 == '9' && num1 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

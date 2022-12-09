#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry poinnt
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';
 
	while (ch <= 'z')
	{
		if (ch == 'e')
			ch++;
		else if (ch == 'q')
			ch++;
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}

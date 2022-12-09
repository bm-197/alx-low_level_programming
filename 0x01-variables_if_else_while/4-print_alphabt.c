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
		if (ch == 'e' && ch == 'q')
			continue;
		ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

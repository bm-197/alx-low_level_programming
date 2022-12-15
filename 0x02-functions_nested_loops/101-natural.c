#include "main.h"
#include <stdio.h>

/**
 * main - print sum of multiple of 3 & 5
 * Return: 0
 */

int main(void)
{
	int sum, i;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum+=i;
		}
	}
	printf("%d", sum);
	return (0);
}

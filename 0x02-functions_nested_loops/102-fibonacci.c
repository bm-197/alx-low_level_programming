#include "main.h"
#include <stdio.h>

/**
 * main - fibonnaci
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, num3;

	for (i = 1; i <= 49; i++)
	{
		num3 = num1 + num3;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
	}
	printf("%lu\n", num3 + num1);
	return (0);
}


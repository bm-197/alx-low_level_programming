#include "main.h"
#include <stdio.h>

/**
 * main - fibonnaci
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long num1, num2, num3;

	num1 = 1;
	num2 = 2;
	printf("%d, ", num1);
	printf("%d, ", num2);
	for (i = 1; i <= 49; i++)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("%lu\n", num3 + num1);
	return (0);
}


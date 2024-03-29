#include <stdio.h>

/**
 * main - fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned long num1, num2, num3;
	float sum;

	num1 = 0;
	num3 = 0;
	num2 = 1;
	sum = 0;

	while (num3 < 4000000)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if ((num3 % 2) == 0)
		{
			sum += num3;
		}
	}
	printf("%.0f", sum);
	printf("\n");
	return (0);
}

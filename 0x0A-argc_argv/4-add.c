#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, nums;
	char *charac;

	if (argv < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		nums = strtol(argv[i], &flag, 10);

		if (*flag)
		{
			printf("Errot\n");
			return (1);
		}
		else
		{
			sum += nums;
		}
	}
	printf("%d\n", sum);
	return (0);
}

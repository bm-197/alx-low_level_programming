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
	int i, mul = 1;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			mul = mul * argv[i];
		}
		printf("%d\n", mul);
	}
	return (0);
}

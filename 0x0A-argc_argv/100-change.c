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
	int i, n, sum = 0;

	n = atoi(argv[1]);
	
	if (argc < 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (n < 0)
	{
		printf("0\n");
		return (0);
	}

}

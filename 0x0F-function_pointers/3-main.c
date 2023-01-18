#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - perform operation
 * @argc: the number of argument entered in stdout
 * @argv: an array of pointers to the argument
 * Return: always 0
 */
 
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int num1, num2;
	char *op;
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] !='\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == % && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	get_op_func(op)(num1, num2);
	return (0);
}

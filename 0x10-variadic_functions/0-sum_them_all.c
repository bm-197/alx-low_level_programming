#include <stdio.h>
#include <stdarg>
#include "variadic_functions.h"

/**
 * sum_them_all - returns th sum of passed argumets
 * @n: number of arguments passed
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int count, sum = 0;

	va_start(list, n);
	
	for (count = 0; count < n; count++)
	{
		sum+=va_arg(list, int);
	}

	va_end(list);
	return (sum);
}

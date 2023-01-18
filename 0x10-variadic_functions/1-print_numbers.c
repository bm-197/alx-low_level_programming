#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @n: size of arguments passed
 * @separator: separator
 * @...: number to printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(lisr, int));
		if (count != (n - 1) && separator != NUll)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 *	-or 0 if 
 *	-there is one or more chars in the string b that is not 0 or 1
 *	-b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1, uint = 0;
	int i;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		uint += (b[i] - 48) * pow;
		pow = pow * 2;
	}
	return (uint);
}

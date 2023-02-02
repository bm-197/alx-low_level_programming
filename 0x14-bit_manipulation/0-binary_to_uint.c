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

	if (b == NULL)
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	
		uint += (b[i] - '0') * pow;
		pow = pow * 2;
	}
	return (uint);
}
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}

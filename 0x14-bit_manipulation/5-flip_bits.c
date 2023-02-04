#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 *	flip to get from one number to another.
 * @n: from
 * @m: to
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m, bits = 0;

	while (bit > 0)
	{
		bits += (bit & 1);
		bit >>= 1;
	}
	return (bits);
}

#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the parameter
 * @index: the index, starting from 0 of the bit you want to get
 * Return:  value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num_val;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	num_val = (num >> index) & 1;

	return (num_val);
}

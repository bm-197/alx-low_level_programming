#include "main.h"

/**
 * int _islower - check lower case
 * @c - character to be checked
 * Return: 1 (lower case), 0 (other wise)
 */

int _islower(int c)
{
	if (c >= 77 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


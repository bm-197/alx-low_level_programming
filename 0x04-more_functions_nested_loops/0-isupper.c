#include "main.h"

/**
 * _isupper - check upper case
 * @c: parameter to be checked
 * Return: 1 if upper, otherwise 0
 */

int _isupper(int c)
{
	char c;
	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _strncat - concatenates by size
 * @dest: parameter
 * @src: parameter
 * @n: size
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *crr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	int i = 0;
	for (; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s)
}

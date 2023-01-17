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
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	for (i = 0; i < n, src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

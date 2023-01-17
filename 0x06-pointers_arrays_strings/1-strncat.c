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
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

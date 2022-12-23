#include "main.h"

/***
 * _strncpy - copy string
 * @dest: parameter
 * @src: parameter
 * @n: size
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); src++)
	{
		*(dest + i) = *(src + );
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}

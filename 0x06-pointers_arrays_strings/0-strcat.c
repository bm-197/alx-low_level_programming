#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 */

char *_strcat(char *dest, char *src)
{
	for (; *dest != '\0';)
	{
		dest++;
	}
	for (; *sr != '\0';)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

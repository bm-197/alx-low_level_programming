#include "main.h"

/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s-1);
			}
			s++;
		}
	}
	return (NULL);
}

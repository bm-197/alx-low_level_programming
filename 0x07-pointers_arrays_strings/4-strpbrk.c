#include "main.h"

/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			
			if (*(s + j) == accept[i])
			{
				return (s);
			}
			j++;
			s++;
		}
	}
	return (NULL);
}

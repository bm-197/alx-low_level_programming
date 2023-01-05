#include "main.h"

/**
 * _strpbrk - function
 * @s: parameter
 * @accept: parameter
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		for (; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}

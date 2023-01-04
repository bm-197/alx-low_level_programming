#include "main.h"

/**
 * _strspn - function
 * @s: parameter
 * @accept: parameter
 * Return: s
 */

char *_strchr(char *s, char *accept)
{
	int i = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					i++;
				} 
			}
		}
		else
		{
			return (i);
		}
	}
	return (i);
}
        


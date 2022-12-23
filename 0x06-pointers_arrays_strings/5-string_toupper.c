#include "main.h"

/**
 * string_toupper - changes all lower case to uppper
 * @s: parameter
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
		}
	}
	return(s);
}

#include "main.h"

/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			len2++;
		}
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i] = s2[j];
	}
	if (result == NULL)
	{
		i = 0;
		return (NULL);
	}
	result[len] = '\0';

	return (result);
}

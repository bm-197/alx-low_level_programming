#include "main.h"

/**
 * string_nconcat - allocates memory for concatinated string
 * @s1: char
 * @s2: char
 * @n: size
 * Return: pointer, otherwise null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j, len;
	char *result;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		while (s1 != '\0')
		{
			s1++;
			len1++;
		}
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		while (s2 != '\0')
		{
			s2++;
			len2++;
		}
	}
	if (len2 > n)
	{
		len2 = n;
	}
	len = len1 + len2;
	result = malloc(sizeof(char) * len )
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);

}

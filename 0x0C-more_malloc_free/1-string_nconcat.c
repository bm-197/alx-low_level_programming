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
	unsigned int i, j, len;
	char *result;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}
	if (j > n)
		j = n;
	result = malloc(sizeof(char) * (i + j + 1));
	if (result == NULL)
		return (NULL);
	for (len = 0; len < i; len++)
		result[len] = s1[len];
	for (len = 0; len < j; j++)
		result[len + i] = s2[len];
	result[i + j] = '\0';
	return (result);
}

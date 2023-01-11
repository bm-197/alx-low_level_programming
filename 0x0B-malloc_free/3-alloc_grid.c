#include "main.h"

/**
 * alloc_gri - function
 * @width: parameter
 * @height: parameter
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int **)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return(NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0 ; j< width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array;
}

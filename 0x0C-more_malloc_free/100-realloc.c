#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to void
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i, new = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	if (new_size > old_size)
		new = old_size;
	for (i = 0; i < new; i++)
		ptr2[i] = oldptr[i];
	free(ptr);
	return (ptr2);

}

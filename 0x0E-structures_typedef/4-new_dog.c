#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new struct
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0, j = 0, k = 0;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[i])
		i++;
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	while (owner[j])
		j++;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}

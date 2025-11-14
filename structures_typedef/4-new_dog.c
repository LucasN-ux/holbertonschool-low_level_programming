#include "dog.h"
#include <stdlib.h>

/**
 * _strcopy - copies a string manually
 * @src: src string
 * Return: Always 0.
 */

char *_strcopy(char *src)
{
	int i, len = 0;
	char *dest;

	if (src == NULL)
		return (NULL);

	while (src[len] != '\0')
		len++;

	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	if (name == NULL || owner == NULL)
		return (NULL);

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);

	tmp->name = _strcopy(name);
	if (tmp->name == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->owner = _strcopy(owner);
	if (tmp->owner == NULL)
	{
		free(tmp->name);
		free(tmp);
		return (NULL);
	}

	tmp->age = age;
	return (tmp);
}

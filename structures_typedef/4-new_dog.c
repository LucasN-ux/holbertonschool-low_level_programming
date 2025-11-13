#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len = 0, owner_len = 0;
	dog_t *tmp;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	tmp = malloc(sizeof(dog_t));

	if (tmp == NULL)
		return (NULL);

	name_copy = malloc((name_len + 1) * sizeof(char));

	if (name_copy == NULL)
	{
		free(tmp);
		return (NULL);
	}

	owner_copy = malloc((owner_len + 1) * sizeof(char));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(tmp);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	for (i = 0; i < owner_len; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	tmp->name = name_copy;
	tmp->age = age;
	tmp->owner = owner_copy;

	return (tmp);
}

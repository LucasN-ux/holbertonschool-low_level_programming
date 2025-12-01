#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list.
 * @head: pointer to head adress
 * @str: pointer to the string
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

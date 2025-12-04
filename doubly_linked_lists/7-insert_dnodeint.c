#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head adress
 * @idx: index of the node, starting from 0
 * @n: value to put in new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx)
	{
		current = current->next;
		i++;
	}

	if (!current && i == idx)
		return (add_dnodeint_end(h, n));
	else if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev)
		current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}

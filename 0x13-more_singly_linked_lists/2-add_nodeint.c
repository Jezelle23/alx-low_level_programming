#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used 
 * Return:(node_new) address of new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new != NULL)
	{
		node_new->n = n;
		node_new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node_new->next = *head;
	*head = node_new;
	return (node_new);
}

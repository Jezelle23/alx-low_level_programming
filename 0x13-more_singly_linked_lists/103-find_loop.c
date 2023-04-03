#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jez = head;
	listint_t *neez = head;

	if (!head)
		return (NULL);

	while (jez && neez && neez->next)
	{
		neez = neez->next->next;
		jez = jez->next;
		if (neez == jez)
		{
			jez = head;
			while (jez != neez)
			{
				jez = jez->next;
				neez = neez->next;
			}
			return (neez);
		}
	}

	return (NULL);
}

#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the start of list to free
 * Return: (var1) Success
 */
size_t free_listint_safe(listint_t **h)
{
	size_t var1 = 0;
	int num;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			var1++;
		}
		else
		{
			free(*h);
			*h = NULL;
			var1++;
			break;
		}
	}

	*h = NULL;

	return (var1);
}

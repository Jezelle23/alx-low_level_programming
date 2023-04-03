#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of list to free
 * Return: (Countn)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t Countn = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (Countn);
	while (*h)
	{
		Countn++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (Countn);
}

#include "lists.h"

/**
 * listint_len - Count the number of elements in a linked list
 * @h: Pointer to the start of the list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

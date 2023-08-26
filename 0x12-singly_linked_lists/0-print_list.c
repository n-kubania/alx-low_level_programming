#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h; /* Use a temporary variable to traverse the list */
	size_t count = 0;

	while (temp != NULL) /* Traverse the list until the end is reached */
	{
	if (temp->str == NULL) /* Check if the string is NULL */
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", temp->len, temp->str);

	count++; /* Increment the count of nodes */
	temp = temp->next; /* Move to the next node */
	}

	return (count); /* Return the total number of nodes */
}

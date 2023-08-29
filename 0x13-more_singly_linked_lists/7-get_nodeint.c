#include "lists.h"

/**
  * get_nodeint_at_index- A function that nth node of a linked list
  * @head:- Pointer to the lists
  * @index:- Index of the code being retrived
  * Return: nothing
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	{
		return (current);
	}
	count++;
	current = current->next;
	}
	return (NULL);
}

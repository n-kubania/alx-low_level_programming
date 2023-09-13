#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes a node
 * @head: Pointer pointing to the pointer of the list
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	temp = *head;
	prev = NULL;

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;

	free(temp);

	return (1);
}

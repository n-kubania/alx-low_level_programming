#include "lists.h"

/**
  * delete_nodeint_at_index - Function that deletes a node
  * @head: Pointer pointing to the pointer of the list
  * @index: Index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
	}
	else
	{
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}
	return (1);
}

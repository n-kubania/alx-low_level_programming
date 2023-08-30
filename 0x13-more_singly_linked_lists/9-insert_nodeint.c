#include "lists.h"
#include <stddef.h>
/**
 * insert_nodeint_at_index - Function that inserts idx position
 * @head: Pointer pointing to the pointer of the list
 * @idx: Position to insert the node
 * @n: Value to add to the new node
 * Return: Pointer to the new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int count = 0, i = 0;

    /* Calculate the number of nodes in the list */
	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

    /* Check if the index is out of bounds */
	if (idx > count)
	return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);
	newnode->n = n;

    /* Insert at the beginning if index is 0 */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

    /* Traverse to the node before the insertion point */
	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

    /* Insert the new node */
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}

#include "lists.h"

/**
 * add_nodeint - Function that adds a node at the beginning
 * @head: Pointer to the list
 * @n: Value to add to the new node
 * Return: Pointer to the new node or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

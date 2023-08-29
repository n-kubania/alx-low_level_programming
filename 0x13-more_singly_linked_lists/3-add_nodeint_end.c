#include "lists.h"

/**
  * add_nodeint_end - Function that adds node at the end
  * @head: pointer to ppointer of the string
  * @n: Value to assign to the new node
  * Return: Pointer to the new node or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = newnode;
	return (newnode);
}

#include "lists.h"

/**
 * add_node_end - Function that adds node at the end of a list
 * @head: pointer to the pointer pointing to the list
 * @str: String to add, duplicate, and put in the new node
 * Return: Pointer to the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
	return (NULL);
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
	free(newnode);
	return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = newnode;
	}

	return (newnode);
}

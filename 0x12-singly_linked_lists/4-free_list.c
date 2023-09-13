#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the beginning of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next_node;

	while (temp != NULL)
	{
	next_node = temp->next;

	free(temp->str);
	free(temp);

	temp = next_node;
	}
}

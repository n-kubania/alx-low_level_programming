#include "lists.h"

/**
  * free_listint-  A function that frees memory
  * @head: Pointer to allocated memory
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
	}
		free(temp);
	{
		temp = next_node;
	}
}

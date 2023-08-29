#include "lists.h"

/**
  * free_listint2- A function that frees allocated memory and set head to NULL
  * @head: Pointer to pointer to the list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
	head = NULL;
}

#include "lists.h"

/**
 * print_listint_safe - A function that prints listint
 * @head: Pointer to the string
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	exit(98);
	return (count);
}

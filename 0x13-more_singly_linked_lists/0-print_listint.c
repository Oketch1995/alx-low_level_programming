#include "lists.h"

/**
 * print_listint - prints all the elements in a singly list
 * @h: head of the linked list
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t linked;

	linked = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		linked++;
	}
	return (linked);
}

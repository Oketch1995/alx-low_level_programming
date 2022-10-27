#include "lists.h"

/**
 * print_listint - prints all the elements in a singly list
 * @h: head of the linked list
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		h = h->next;
		node++;
	}
	return (node);
}

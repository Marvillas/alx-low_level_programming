#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @list_head: A pointer to the head of the listint_t list.
 *
 * Return: void
 */
void free_listint(listint_t *list_head)
{
	listint_t *current;

	while (list_head != NULL)
	{
		current = list_head;
		list_head = list_head->next;
		free(current);
	}
}

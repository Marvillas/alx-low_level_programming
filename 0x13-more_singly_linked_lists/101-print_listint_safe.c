#include "lists.h"
/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_listint_safe - safely prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow, *fast;
	int loop_detected = 0;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}
	if (loop_detected)
		node_count = print_loop(head, slow);
	else
	{
		while (head != NULL)
		{
			_putchar('[');
			print_number((intptr_t)head);
			_putchar(']');
			_putchar(' ');
			print_number(head->n);
			_putchar('\n');
			head = head->next;
			node_count++;
		}
	}
	return (node_count);
}

/**
 * print_loop - safely prints a listint_t linked list with loop
 * @head: pointer to the head of the list
 * @slow: pointer to the loop detection point
 *
 * Return: the number of nodes in the list
 */
size_t print_loop(const listint_t *head, const listint_t *slow)
{
	size_t node_count = 0;
	const listint_t *start = head;

	while (start != slow)
	{
		_putchar('[');
		print_number((intptr_t)start);
		_putchar(']');
		_putchar(' ');
		print_number(start->n);
		_putchar('\n');
		start = start->next;
		node_count++;
	}
	_putchar('-');
	_putchar('>');
	_putchar(' ');
	_putchar('[');
	print_number((intptr_t)slow);
	_putchar(']');
	_putchar(' ');
	print_number(slow->n);
	_putchar('\n');
	node_count++;
	slow = slow->next;

	while (slow != start)
	{
		_putchar('[');
		print_number((intptr_t)slow);
		_putchar(']');
		_putchar(' ');
		print_number(slow->n);
		_putchar('\n');
		slow = slow->next;
		node_count++;
	}
	return (node_count);
}

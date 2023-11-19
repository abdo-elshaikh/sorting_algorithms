#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: The doubly linked list
 * @node1: The first node
 * @node2: The second node
 * Return: Nothing
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;

	node1->prev = node2;
	node2->next = node1;
}
/**
 * insertion_sort_list - Sort a doubly linked list of
 * integers in ascending order of their values
 * @list: The doubly linked list to be sorted
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insert;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current->prev;
		while (insert && insert->n > current->n)
		{
			swap_nodes(list, insert, current);
			insert = current->prev;
			print_list(*list);
		}

		current = current->next;
	}
}

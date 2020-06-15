#include "sort.h"

/**
 * put_linkedk - change the nodes backward
 * @move_node: The node it will change
 */
void put_linkedk(listint_t *move_node)
{
	/* conect switched nodes with outer nodes */
	move_node->prev->next = move_node->next;
	if (move_node->next != NULL)
		move_node->next->prev = move_node->prev;
	move_node->next = move_node->prev;
	/* change pointers to outer nodes */
	move_node->prev = move_node->prev->prev;
	move_node->next->prev = move_node;
}

/**
 * insertion_sort_list - Creates a doubly linked list from an array of integers
 * @list: list to convert to a doubly linked list
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *move_node = NULL;

	if (*list == NULL)
		return;

	move_node = (*list)->next;
	while (move_node != NULL || (*list)->next == NULL)
	{
		while (move_node->prev != NULL
		&& move_node->n < move_node->prev->n)
		{
			/* moverse pa tras*/
			put_linkedk(move_node);
			if (move_node->prev == NULL)
				*list = move_node;
			else
				move_node->prev->next = move_node;
			print_list(*list);
		}
		/* move forward*/
		move_node = move_node->next;
	}
}

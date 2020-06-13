#include "sort.h"

/**
 * swapdll - swap double linked list nodes
 * @list: head of double linked list
 * Return: list pointer to the lower value node switched
 */

listint_t swapdll(listint_t **list)
{
	listint_t *aux = NULL;

	/* assign aux pointer */
	aux = (*list)->next;
	/* conect switched nodes with outer nodes */
	aux->prev = (*list)->prev;
	(*list)->next = aux->next;
	/* conect switched nodes with inner nodes */
	aux->next = *list;
	(*list)->prev = aux;
	/* change pointers to outer nodes */
	aux = aux->prev;
	*list = (*list)->next;
	/* conect outer nodes with switched nodes */
	aux->next = (*list)->prev;
	(*list)->prev = aux->next->next;

	*list = aux;
	aux = NULL;

	return(*list);
}

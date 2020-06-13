#include "sort.h"

/*aux->n = (int) aux->n ^ (int) aux->prev->n
aux->prev->n = (int) aux->n ^ (int) aux->prev->n
aux->n = (int) aux->n ^ (int) aux->prev->n
aux = aux->prev;*/
/*aux->n = (const int)a;*/

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */

/* void put_linkedk(listint_t *where, listint_t *new_node) */
/* { */


/* } */

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

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pList = *list, *aux, *move_node;
	int count = 0, aux_count = 0;

	while (pList)
		pList = pList->next, count++;
	if (count <= 2)
		return;

	pList = *list;
	while (pList->next != NULL)
	{
		if (pList->prev)
			if (pList->prev->n > pList->n)
			{
				aux = pList, aux_count = count;
				while (aux && aux_count <= 0)
				{
					move_node = aux;
					if (aux->prev)
						aux->prev->next = aux->next;
					if (aux->next)
						aux->next->prev = aux->prev;
					/* Move backward */
					aux = aux->prev;
					put_linkedk(aux, move_node);
					if (aux->prev)
						if (aux ->prev->n < aux->n)
							aux_count = 0;
					aux_count--;
				}
				print_list(*list);
			}
		count++;
		pList = pList->next;
	}
}

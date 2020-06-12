#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

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
	listint_t *pList = *list, *aux;
	int count = 0;

	while (pList->next != NULL)
	{
		if (pList->prev)
			if (pList->prev->n > pList->n)
			{
				aux = pList;
				while (aux->prev != NULL && !(pList->prev->n > pList->n))
				{
					/*aux->n = (int) aux->n ^ (int) aux->prev->n
					aux->prev->n = (int) aux->n ^ (int) aux->prev->n
					aux->n = (int) aux->n ^ (int) aux->prev->n
					aux = aux->prev;*/
					(int) aux->n = (int) aux->n + 1;

				}
				printf("%d, ", pList->n);
			}
		count++;
		pList = pList->next;
	}
	printf("\n");
}

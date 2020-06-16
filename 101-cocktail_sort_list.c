#include "sort.h"
/**
 * cocktail_sort_list - sorts a dllist of int using the
 * Cocktail shaker sort algorithm
 * @list: ddl
 */
void cocktail_sort_list(listint_t **list)
{
        int i = 0, j = 0;
        listint_t *aux1, *aux;

        aux1 = *list;
        aux = *list;
        if (aux1)
        {
		for (; aux1->next; j++)
			aux1 = aux1->next;
		aux1 = NULL;
        }
        else
		return;
        for (; j > 0; j--)
        {
		i = j;
		for (; j > 0; j--)
		{
			if (aux->next->n < aux->n)
			{
				bbl_up(aux);
				print_list(*list);
			}
			else
				aux = aux->next;
		}
		for (; i > j; j++)
		{
			if (aux->prev->n > aux->n)
			{
				bbl_down(aux);
				if (aux->n < (*list)->n && i - j <2)
					*list = aux;
				print_list(*list);
			}
			else
			{
				aux = aux->prev;
			}
		}
		/* *list = aux; */
	}
}
/**
 * put_linkedk - change the nodes backward
 * @move_node: The node it will change
 */
void bbl_up(listint_t *pointer)
{
        listint_t *low;

        low = pointer;
        if (pointer->next)
                low = low->next;
        else
		return;
        if (pointer->prev)
        {
		low->prev = pointer->prev;
		pointer->prev->next = low;
        }
        else
		low->prev = NULL;
        if (low->next)
        {
		pointer->next = low->next;
		low->next->prev = pointer;
        }
        else
		pointer->next = NULL;
        pointer->prev = low;
        low->next = pointer;

}
/**
 * put_linkedk - change the nodes backward
 * @move_node: The node it will change
 */
void bbl_down(listint_t *pointer)
{
        listint_t *big;

        big = pointer;
        if (pointer->prev)
                big = big->prev;
        else
		return;
        if (pointer->next)
        {
		big->next = pointer->next;
		pointer->next->prev = big;
        }
        else
		big->next = NULL;
        if (big->prev)
        {
		pointer->prev = big->prev;
		big->prev->next = pointer;
        }
        else
		pointer->prev = NULL;
        pointer->next = big;
        big->prev = pointer;
}

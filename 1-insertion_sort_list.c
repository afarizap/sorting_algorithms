#include "sort.h"

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

  while (list != NULL)
  {

    if ((*list)->n < (*list)->next->n)
      list = (*list)->next;

    else
    {

      aux = (*list)->next;

      aux->prev = (*list)->prev;
      (*list)->next = aux->next;

      aux->next = *list;
      (*list)->prev = aux;

      aux = aux->prev;
      *list = (*list)->next;

      aux->next = (*list)->prev;
      (*list)->prev = aux->next->next;

      *list = aux;
      aux = NULL;
      print_list(*list);
      break;
      
      }
    }
  
}

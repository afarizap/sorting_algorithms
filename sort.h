#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* aux functions*/
void quick(int *array, int p, int r, size_t size);
int partition(int *array, int p, int r, size_t size);
void swap_arr(int *array, int dest, int origin, size_t size);
int compare_ints(int *array, size_t size, const void *p, const void *q);
void bbl_up(listint_t *pointer);
void bbl_down(listint_t *pointer);

/* algoritmos duros*/
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
listint_t swapdll(listint_t **list);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
int find_max(int *array, int size);
void qsorthoare(int *array, int high, int low, size_t size);
int make_arr(int size);
void merge_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif

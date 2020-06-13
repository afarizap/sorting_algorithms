#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1], i = -1, j = 0;
	/* i = posicion - 1*/

	if (size <= 2)
		return;

	/* Normalizar el array */
	/* avoid to mark the pivot*/
	while (j < (int) size - 1)
	{
		if (array[j] < array[pivot])
		{
			i++;
			array[i] = array[i] ^ array[j];
			array[j] = array[i] ^ array[j];
			array[i] = array[i] ^ array[j];
			/*swap_arr(&array, i, j);*/
		}
		j++;
	}
	print_array(array, size);

}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void swap_arr(int *array, int dest, int origin)
{
	array[dest] = array[dest] ^ array[origin];
	array[origin] = array[dest] ^ array[origin];
	array[dest] = array[dest] ^ array[origin];
}
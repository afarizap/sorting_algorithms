#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, post;
	int min = array[0];

	if (size < 2)
		return;

	/* ask me later for the -1 */
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i; j < size; j++)
		{
			/* find the min number */
			if (array[j] < min)
			{
				post = j;
				min = array[j];
			}
		}
		/* this is for avoid repeats or the order*/
		if (post != i)
		{
			array[i] = array[i] ^ array[post];
			array[post] = array[i] ^ array[post];
			array[i] = array[i] ^ array[post];
			print_array(array, size);
		}
	}
}

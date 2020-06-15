#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, post = 0, temp = 0;
	int min = array[0];

	if (size < 2 || array == NULL)
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
		if (post != i && post != 0)
		{
			temp = array[i];
			array[i] = array[post];
			array[post] = temp;
			print_array(array, size);
		}
	}
}

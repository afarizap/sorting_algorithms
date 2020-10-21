#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, s = 1;
	int t = 0;

	if (size < 2 || array == NULL)
		return;

	while (s != 0)
		for (i = 0, s = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				s++;
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				print_array(array, size);
			}
		}
}

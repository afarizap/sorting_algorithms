#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp, count = 0;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i, count = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j, count++;
		}
		if (min != 0 && temp != min && count > 0)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
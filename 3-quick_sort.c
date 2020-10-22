#include "sort.h"
void swap_arr1(int *array, int dest, int origin, size_t size);
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	int p = 0, r = size - 1;

	if (!array || size <= 2)
		return;
	quick(array, p, r, size);
}

/**
 * quick - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @p: first element in array
 * @r: last element in array
 * @size: number of elements in array
 */
void quick(int *array, int p, int r, size_t size)
{
	int q;

	if (p < r)
	{
		q = partition(array, p, r, size);
		quick(array, p, q - 1, size);
		quick(array, q + 1, r, size);
	}
}
/**
 * partition - Splits the array in low and high
 * @array: array of integers
 * @p: first element in array
 * @r: last element in array
 * @size: number of elements in array
 * Return: i + 1
 */
int partition(int *array, int p, int r, size_t size)
{
	int i = p - 1, j;

	for (j = p; j <= r - 1;)
	{
		if (array[j] <= array[r])
		{
			i++;
			swap_arr1(array, i, j, size);
			if (i < j)
				print_array(array, size);
			j++;
		}
		else
			j++;
	}
	swap_arr1(array, i + 1, r, size);
	if (i + 1 < r)
		print_array(array, size);
	return (i + 1);
}
/**
 * swap_arr1 - swap two array indexes dest with origin
 * @array: array of integers
 * @dest: first number
 * @origin: second number
 * @size: size of array
 */
void swap_arr1(int *array, int dest, int origin, size_t size)
{
	(void) size;

	if (array[dest] != array[origin])
	{
		array[dest] = array[dest] ^ array[origin];
		array[origin] = array[dest] ^ array[origin];
		array[dest] = array[dest] ^ array[origin];
	}
}

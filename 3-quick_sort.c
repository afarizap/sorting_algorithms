#include "sort.h"


/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (size < 2)
		return;

	quick(array, low, high, size);
}
/**
 * quick - recursive quicksort
 * @array: array of numbers
 * @low: most left number from low sort
 * @high: most right number from high sort
 * @size: number of elements in array
 */
void quick(int *array, int low, int high, size_t size)
{
	int p = 0;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quick(array, low, p - 1, size);
		quick(array, p + 1, high, size);
	}
}
/**
 * partition - splits the array in low and high
 * @array: array of integers
 * @low: most left number from low sort
 * @high: most right number from high sort
 * @size: number of elements in array
 * Return: right index of i
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i, j;

	i = low - 1;
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_arr(array, i, j, size);
		}
	}
	swap_arr(array, i + 1, high, size);
	return (i + 1);
}
/**
 * swap_arr - swap two array indexes dest with origin
 * @array: array of integers
 * @dest: first number
 * @origin: second number
 * @size: number of elements in array
 */
void swap_arr(int *array, int dest, int origin, size_t size)
{
	if (dest != origin)
	{
		array[dest] = array[dest] ^ array[origin];
		array[origin] = array[dest] ^ array[origin];
		array[dest] = array[dest] ^ array[origin];
		print_array(array, size);
	}
}


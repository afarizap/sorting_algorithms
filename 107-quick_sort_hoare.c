#include "sort.h"


void qsorthoare(int *array, int low, int high, size_t size);
/**
 * quick_sort_hoare - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: Array
 * @size: size
 * Return: Void
 */
void quick_sort_hoare(int *array, size_t size)
{
	int last = size - 1;

	if (size == 0 || array == NULL)
		return;

	qsorthoare(array, 0, last, size);
}
/**
 * qsorthoare - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: the array it will split it
 * @high: is the highest
 * @low: is the lowest
 * @size: the total size of the array
 */
void qsorthoare(int *array, int low, int high, size_t size)
{
	int part = 0;

	if (low < high)
	{
		part = partition(array, low, high, size);
		qsorthoare(array, low, part, size);
		qsorthoare(array, part + 1, high, size);
	}
}
/**
 * partition - make apart the array and split it
 * and finally organize
 * @array: the array it will split it
 * @high: is the highest
 * @low: is the lowest
 * @size: the total size of the array
 * Return: the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high + low], i = low - 1, j = high + 1;
	/*Las variables van hacer las que recorran entre la praticion*/
	/* para organizar los valor*/

	while (((2 * 2 + 1) / (4 + 1)) == 1)
	{
		while (array[++i] < pivot)
			;
		while (array[--j] > pivot)
			;
		/*condtional to find the end of the loop*/
		if (i > j)
			return (j);
		swap_arr(array, i, j, size);
	}

	return (j--);
}

/**
 * swap_arr - swap two array indexes dest with origin
 * @array: array of integers
 * @dest: first number
 * @origin: second number
 * @size: size of array
 */
void swap_arr(int *array, int dest, int origin, size_t size)
{
	if (array[dest] != array[origin])
	{
		array[dest] = array[dest] ^ array[origin];
		array[origin] = array[dest] ^ array[origin];
		array[dest] = array[dest] ^ array[origin];
		print_array(array, size);
	}
}

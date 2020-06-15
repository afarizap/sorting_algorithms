#include "sort.h"

void swap(int *array, int dest, int origin);
/**
 * shell_sort - sort array by shell method using knuth's number
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
	int gap, i = 0, j = 0, knut = 0;
	/*Find the gap*/
	if (size < 2 || array == NULL)
		return;
	while ((knut * 3) + 1 < (int)size)
		knut = (knut * 3) + 1;
	gap = knut;
	while (gap > 1)
	{
		j = (size - 1) - gap, i = size - 1;
		while (j >= 0)
		{
			if (array[i] < array[j])
				swap(array, i, j);
			j--, i--;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
		if (gap == 1)
		{
			j = (size - 1) - gap, i = size - 1;
			while (i >= 0)
			{
				if (array[i] < array[j])
				{
					swap(array, i, j);
					j = (size - 1) - gap, i = size - 1;
				}
				else
					j--, i--;
			}
			print_array(array, size);
			return;
		}
	}
}
/**
 * swap - swap two numbers by xor
 * @array: array with integers
 * @dest: integer 1
 * @origin: integer 2
 */
void swap(int *array, int dest, int origin)
{
	if (array[dest] != array[origin])
	{
		array[dest] = array[dest] ^ array[origin];
		array[origin] = array[dest] ^ array[origin];
		array[dest] = array[dest] ^ array[origin];
	}
}

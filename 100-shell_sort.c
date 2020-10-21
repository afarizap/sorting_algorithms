#include "sort.h"
void bubble_sort(int *array, size_t size);
void swap(int *array, int dest, int origin);
/**
 * shell_sort - sort array by shell method using knuth's number
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
	int i, j, knut = 1;
	/*Find the gap*/
	if (size < 2 || !array)
		return;
	while ((knut * 3) + 1 < (int)size)
		knut = (knut * 3) + 1;
	for (i = size - 1, j = i - knut; knut > 1; i = size - 1, j = i - knut)
	{
		for (;j > -1; j--, i--)
			if (array[i] < array[j])
				swap(array, i, j);
		knut = (knut - 1) / 3;
		print_array(array, size);
	}
	bubble_sort(array, size);
	print_array(array, size);
}
/**
 * swap - swap two numbers by xor
 * @array: array with integers
 * @dest: integer 1
 * @origin: integer 2
 */
void swap(int *array, int dest, int origin)
{
	int t;

	t = array[dest];
	array[dest] = array[origin];
	array[origin] = t;
}
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
                        }
                }
}

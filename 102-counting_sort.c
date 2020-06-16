#include "sort.h"
#include <stdio.h>
#include <string.h>

/**
 * counting_sort - sorts an array of integers in ascending order using
 * the Counting sort algorithm
 * @array: is the array it will sort
 * @size: the total size of value
 *
 */
void counting_sort(int *array, size_t size)
{
	int total, count_arr[1024], i, new_arr[1024], num;

	if (size < 2 || array == NULL)
		return;
	/* Found the max number of the array and plus 'cuz the array start a 0*/
	total = find_max(array, (int) size) + 1;
	/* Fill the array and give space in the array and make a copy*/
	memset(count_arr, 0, sizeof(int) * total + 1);
	memset(new_arr, 0, sizeof(int) * size);

	/* count each number in array*/
	for (i = 0; i < (int) size; i++)
		count_arr[array[i]] += 1;

	/* aca no mas hace el total y lo hace bonito*/
	for (i = 1; i < total; i++)
		count_arr[i] += count_arr[i - 1];
	print_array(count_arr, total);

	/* Fill the new array*/
	for (i = 0; i < (int) size; i++)
		num = count_arr[array[i]] - 1, new_arr[num] = array[i];

	for (i = 0; i < (int) size; i++)
		array[i] = new_arr[i];
}
/**
 * find_max - finding the max of the array
 * @array: is the array it will sort
 * @size: the total size of value
 *
 * Return: the max number of the list
 */
int find_max(int *array, int size)
{
	int i, max = array[0];

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];

	return (max);
}

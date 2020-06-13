#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
void swap_arr(int *array, int dest, int origin)
{
	array[dest] = array[dest] ^ array[origin];
	array[origin] = array[dest] ^ array[origin];
	array[dest] = array[dest] ^ array[origin];
}

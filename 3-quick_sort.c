#include <stdio.h>
#include "sort.h"

/**
 * swap - swap
 * @array: array
 * @idx1: index 1
 * @idx2: index 2
 * @size: size
 */
void swap(int *array, int idx1, int idx2, size_t size)
{
	if (idx1 == idx2 || array[idx1] == array[idx2])
		return;

	array[idx1] += array[idx2];
	array[idx2] = array[idx1] - array[idx2];
	array[idx1] -= array[idx2];
	print_array(array, size);
}

/**
 * partition - partition
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 *
 * Return: index
 */
size_t partition(int *array, size_t size, int low, int high)
{
	int p, i;

	p = low - 1;

	for (i = low; i < high; i++)
	{
		if (array[i] < array[high])
			swap(array, ++p, i, size);
	}

	swap(array, ++p, high, size);

	return (p);
}

/**
 * q_sort - quick sort
 * @array: array
 * @size: size
 * @low: low
 * @high: high
 */
void q_sort(int *array, size_t size, int low, int high)
{
	int p;

	if (low >= high || low < 0)
		return;

	p = partition(array, size, low, high);

	q_sort(array, size, low, p - 1);
	q_sort(array, size, p + 1, high);
}


/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	q_sort(array, size, 0, size - 1);
}

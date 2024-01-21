#include "sort.h"
#include <stdio.h>
/**
 * swap - swaps
 * @array: array
 * @i: i
 * @j: j
 */
void swap(int *array, size_t i, size_t j)
{
	array[i] += array[j];
	array[j] = array[i] - array[j];
	array[i] -= array[j];
}


/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
				swap(array, i, j);
		}
		print_array(array, size);
	}
}

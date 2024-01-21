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
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}

		if (min != i)
			swap(array, i, min);

		print_array(array, size);
	}
}

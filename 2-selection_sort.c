#include "sort.h"

/**
 * selection_sort - Sorts a array of integers in ascending order using the
 * Selection sorting algorithm.
 * @array: Input array of integers
 * @size: Size of the array
 * Return: N/A
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
			if (array[k] > array[j])
				k = j;
		if (i != k)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}

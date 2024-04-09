#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 * @array: Input array.
 * @size: Size of the array.
 * Return: N/A
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, s;
	int temp, swap;

	for (s = size, swap = 1; s > 0 && swap; s--)
	{
		swap = 0;
		for (i = 0; (i + 1) < s; i++)
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swap = 1;
			}
	}
}

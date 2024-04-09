#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick sort algorithm.
 * @array: Input array.
 * @size: Size of the array.
 * Return: N/A
 */

void quick_sort(int *array, size_t size)
{
	_quick(array, 0, size - 1, size);
}

/**
 * _quick - Helper function for the quick_sort function.
 * @in: Input array.
 * @lo: Index of first element.
 * @hi: Index of last element.
 * @size: Size of the array.
 * Return: N/A
 */

void _quick(int *in, int lo, int hi, int size)
{
	int h, l, i;
	int temp;

	if (lo < hi)
	{
		h = hi;
		l = lo;
		for (i = lo; i < hi; i++)
		{
			if (in[i] < in[h])
			{
				if (i != l)
				{
					temp = in[i];
					in[i] = in[l];
					in[l] = temp;
					print_array(in, size);
				}
				l++;
			}
		}
		if (l != h && in[l] != in[h])
		{
			temp = in[l];
			in[l] = in[h];
			in[h] = temp;
			print_array(in, size);
		}
		_quick(in, lo, l - 1, size);
		_quick(in, l + 1, hi, size);
	}
}


#include "sort.h"

/**
 * smallest - a function that returns pos of smallest value
 * @arr: the address to an array
 * @k: the current index
 * @n: size of the array
 * Return: the pos of the small value
 */

int smallest(int arr[], int k, int n)
{
	int pos, small = arr[k], i;

	for (i = k + 1; i < n; i++)
	{
		if (arr[i] < small)
		{
			small = arr[i];
			pos = i;
		}
	}
	return (pos);
}

/**
 * selection_sort - a function that implements selction sort
 * @array: an unsorted array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t  k, pos, temp;

	for (k = 0; k < size - 1; k++)
	{
		pos = smallest(array, k, size);
		temp = array[k];
		array[k] = array[pos];
		array[pos] = temp;
		print_array(array, size);
	}
}

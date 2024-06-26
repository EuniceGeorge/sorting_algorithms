#include "sort.h"

/**
 * selection_sort - a function that implements selction sort
 * @array: an unsorted array
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (size <= 0)
		return;
	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

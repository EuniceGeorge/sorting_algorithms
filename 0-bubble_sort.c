#include "sort.h"

/**
 * bubble_sort - A function that sorts a list of elements
 * @array: The list of elements
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp, flag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			return;
	}
}

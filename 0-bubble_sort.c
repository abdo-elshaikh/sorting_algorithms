#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j = 0;
	int tmp;

	while (j < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		j++;
	}
}

#include "sort.h"

/**
 * lomuto_partition - Partition an array of integers
 * @array: The array to be partitioned
 * @low: Lowest index
 * @high: Highest index
 * Return: The index of the pivot element
 */
size_t lomuto_partition(int *array, int low, int high)
{
    int j;
    int tmp;
    int pivot = array[high];
    int i = low - 1;

    if (!array || low >= high)
        return (i);

    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            /*swap elements*/
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            /*print array*/
            print_array(array, high + 1);
        }
    }
    tmp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = tmp;
    print_array(array, high + 1);
    return (i + 1);
}

/**
 * quick_sort_lomuto - Sort an array of integers in ascending order
 * @array: The array to be sorted
 * @low: Lowest index
 * @high: Highest index
 * Return: Nothing
*/
void quick_sort_lomuto(int *array, int low, int high)
{
    int pivot;

    if (low < high)
    {
        pivot = lomuto_partition(array, low, high);
        if (pivot > 0)
            quick_sort_lomuto(array, low, pivot - 1);
        quick_sort_lomuto(array, pivot + 1, high);
    }
}
/**
 * quick_sort - Sort an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The number of elements in @array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
    if (!array || size <= 1)
        return;
    
    quick_sort_lomuto(array, 0, size - 1);
}

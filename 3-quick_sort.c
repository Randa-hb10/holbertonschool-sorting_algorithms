#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Order a subset of an array of integers according to
 *                    the Lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @low: The starting index of the subset to order.
 * @high: The ending index of the subset to order.
 * @size: The size of the array.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_ints(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap_ints(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 * @size: The size of the array.
 */
void lomuto_sort(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = lomuto_partition(array, low, high, size);
		lomuto_sort(array, low, part - 1, size);
		lomuto_sort(array, part + 1, high, size);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, 0, size - 1, size);
}

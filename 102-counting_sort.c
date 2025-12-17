#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/* Helper functions prototypes */
int get_max(int *array, size_t size);
void init_count(int *count, int max);
void count_numbers(int *array, size_t size, int *count);
void cumulative_and_print(int *count, int max);
void build_output(int *array, int *output, int *count, size_t size);
void copy_array(int *array, int *output, size_t size);

/**
 * counting_sort - Sorts an array of integers using Counting sort
 * @array: Array of integers to be sorted
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output, max;

	if (!array || size < 2)
		return;

	max = get_max(array, size);

	count = malloc(sizeof(int) * (max + 1));
	output = malloc(sizeof(int) * size);
	if (!count || !output)
	{
		free(count);
		free(output);
		return;
	}

	init_count(count, max);
	count_numbers(array, size, count);
	cumulative_and_print(count, max);
	build_output(array, output, count, size);
	copy_array(array, output, size);

	free(count);
	free(output);
}

/**
 * get_max - Finds the maximum value in an array of integers
 * @array: Input array
 * @size: Size of the array
 *
 * Return: Maximum integer in the array
 */
int get_max(int *array, size_t size)
{
	int max = 0;
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}

/**
 * init_count - Initializes the count array with zeros
 * @count: Count array
 * @max: Maximum value used to determine the size
 */
void init_count(int *count, int max)
{
	int i;

	for (i = 0; i <= max; i++)
		count[i] = 0;
}

/**
 * count_numbers - Counts the occurrences of each number in the array
 * @array: Input array
 * @size: Size of the array
 * @count: Count array
 */
void count_numbers(int *array, size_t size, int *count)
{
	size_t i;

	for (i = 0; i < size; i++)
		count[array[i]]++;
}

/**
 * cumulative_and_print - Computes the cumulative count and prints it
 * @count: Count array
 * @max: Maximum value in the array
 */
void cumulative_and_print(int *count, int max)
{
	int i;

	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];

	for (i = 0; i <= max; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", count[i]);
	}
	printf("\n");
}

/**
 * build_output - Builds the sorted output array
 * @array: Original array
 * @output: Output array
 * @count: Count array
 * @size: Size of the array
 */
void build_output(int *array, int *output, int *count, size_t size)
{
	size_t i;

	for (i = size; i > 0; i--)
	{
		output[count[array[i - 1]] - 1] = array[i - 1];
		count[array[i - 1]]--;
	}
}

/**
 * copy_array - Copies the sorted output array into the original array
 * @array: Original array
 * @output: Sorted output array
 * @size: Size of the array
 */
void copy_array(int *array, int *output, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		array[i] = output[i];
}


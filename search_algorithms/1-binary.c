#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array,
 * of integers using the Binary search algorithm.
 * @array: array of integers.
 * @size: number of integers in the array.
 * @value: value to find.
 * Return: the index of wanted value or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1;
	size_t i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		if (value > array[mid])
			low = mid + 1;
	}
	return (-1);
}

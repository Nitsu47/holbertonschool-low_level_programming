#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers.
* @array: array of integers.
* @size: size of the array.
* @value: value to find in the array.
* Return: First index with the value.
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int ite;

	if (array ==  NULL)
		return (-1);

	for (ite = 0; ite < size; ite++)
	{
		printf("Value checked array[%d] = [%d]\n", ite, array[ite]);
		if (array[ite] == value)
			return (ite);
	}
	return (-1);
}

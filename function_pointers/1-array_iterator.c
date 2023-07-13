#include "function_pointers.h"
/**
 * array_iterator - Executes a function given on each element of an array
 * @array: Pointer to array
 * @size: Size of the array
 * @action: function to iterate throw array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter = 0;

	if (action == NULL || array == NULL)
		return;
	for (; counter < size; counter++)
		action(array[counter]);
}

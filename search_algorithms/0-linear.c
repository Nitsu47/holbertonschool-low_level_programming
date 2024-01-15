#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - linear search algorithm, starts from the beginning,
 * and doesn't stop until the value is found.
 * @array: array of integers.
 * @size: number of elements in the array.
 * @value: value to find.
 * Return: index of the value or -1.
 */
int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

        if (array[i]== value)
        {
            
            return (i);
        }
    }

    return (-1);
}

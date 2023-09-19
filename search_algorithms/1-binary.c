#include "search_algos.h"
/**
* binary_search - searches for a value using the Binary search algorithm.
* @array: array of integers.
* @size: number of elements in the array.
* @value: value to find.
* Return: index where the value is located.
*/
int binary_search(int *array, size_t size, int value)
{
    int low = 0, high = size - 1, mid, ite;

    if (array == NULL || size < 1)
        return (-1);
    
    while (low <= high)
    {
        printf("Searching in array: ");
        for (ite = low; ite < high; ite++)
            printf("%d ", array[ite]);
        if (ite == high)
            printf("%d", array[ite]);
        printf("\n");
        mid = low + (high - low) / 2;
        if (array[mid] < value)
            low = mid + 1;
        if (array[mid > value])
            high = mid - 1;
        if (array[mid] == value)
            return (mid);
    }
    return (-1);
}

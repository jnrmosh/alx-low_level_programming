#include <stdio.h>

/**
 * array_iterator - executes an array iteration
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

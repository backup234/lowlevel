#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - fun to print given array
 * @array: the integer array to print
 * @size: array size
 * @action: function pointer to a fun that have array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size > 0 && array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

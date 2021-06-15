#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an  element in an array
 * @size: size of the array
 *@array: array
 *@cmp: pointer to fun
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0 && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

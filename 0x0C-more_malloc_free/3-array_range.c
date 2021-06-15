#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - function to create sorted int array
 * @min: array minemum value
 * @max: array with max value
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == 0)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

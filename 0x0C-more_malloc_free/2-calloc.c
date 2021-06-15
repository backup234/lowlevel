#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - function as calloc
 * @nmemb: number of elements
 * @size: the size of the variable
 *
 * Return: pointer to the allcoated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

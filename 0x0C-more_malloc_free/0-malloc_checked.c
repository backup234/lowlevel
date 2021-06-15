#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - function to allocate a mem location
 *@b: size of an int;
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (int *) malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

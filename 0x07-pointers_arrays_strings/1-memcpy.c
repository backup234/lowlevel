#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - prints buffer in hexa
 * @dest: destination array
 * @src: source array
 * @n: numbers to be copied
 * Return: copied value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

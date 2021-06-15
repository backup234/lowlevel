#include <stdio.h>
#include "holberton.h"
/**
 *  *_memset - fill n beyts with char
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: char
 * Return: char pinter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

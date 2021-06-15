#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - rerurn the llength of a string.
 *
 *@s: pointer s
 * Return: intger.
 */
int _strlen(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

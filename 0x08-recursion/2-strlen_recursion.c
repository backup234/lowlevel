#include "holberton.h"
#include <stdio.h>

/**
 *  _strlen_recursion - check the code for Holberton School students.
 *@s: pointer to string
 * Return: the lengeth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}

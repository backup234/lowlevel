#include <stdio.h>
#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 *
 *@dest: value one
 *@src: value two
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *text1 = src;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (text1);
}

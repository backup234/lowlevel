#include <stdio.h>
#include "holberton.h"
/**
 * *_strcat - function to move containt of src to dest
 *
 *@dest: destination array
 *@src: source file of string
 * Return: char, an array with both strigs
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}

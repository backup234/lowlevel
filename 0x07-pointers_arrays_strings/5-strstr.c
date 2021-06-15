#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - find the string needle in heystack
 * @haystack: sring to be scaned
 * @needle: string to found in string haystack
 * Return: poiter to first match of string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}

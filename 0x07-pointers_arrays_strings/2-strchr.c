#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - find char c in str s
 * @s: string to be scaned
 * @c: character to be found
 * Return: pointer to scaned string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the `\0` of the string str
	 */
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

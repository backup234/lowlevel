#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - find first occurace of char from accept
 * @s: string to be scaned
 * @accept: contain char to be found
 * Return: pointer to first found char in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

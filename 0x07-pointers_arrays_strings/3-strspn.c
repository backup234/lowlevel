#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - return length of chars form accept stirng
 * @s: string to be scaned for chars from acccept
 * @accept: contain chars to be found in string s
 * Return: length of chars from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (len);
}

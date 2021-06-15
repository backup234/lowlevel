#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reversing strings
 *
 *@s: vallue of pointr s
 * Retrun - void
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}

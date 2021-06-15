#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multible two int arguments
 *@argc: count arguments
 *@argv: strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, multi = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			multi *= atoi(argv[i]);
		}
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

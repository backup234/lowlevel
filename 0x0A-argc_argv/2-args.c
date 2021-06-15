#include <stdio.h>
#include "holberton.h"
/**
 * main - function to count arhumetns
 *@argc: count arguments
 *@argv: strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

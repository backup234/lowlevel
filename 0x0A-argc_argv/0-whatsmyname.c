#include <stdio.h>
#include "holberton.h"
/**
 * main - function to peint name
 *@argc: count arguments
 *@argv: strings
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}

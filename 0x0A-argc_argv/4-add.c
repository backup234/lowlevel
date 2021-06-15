#include <stdio.h>
#include <stdlib.h>
/**
 * main - add argumments passed
 * @argc: number og args
 * @argv: string argumebts to be added
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *next;

	if (argc < 2)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &next, 10);

		if ((next == argv[i]) || (*next != '\0'))
		{
			printf("Error\n");
			return (1);
		}
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

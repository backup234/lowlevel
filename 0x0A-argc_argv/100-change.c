#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to calculate chage
 *@argc: count arguments
 *@argv: strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, n, re1, re2, re3, re4;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		re1 = (n % 25);
		re2 = (n % 25) % 10;
		re3 = (n % 25) % 10 % 5;
		re4 = (n % 25) % 10 % 5 % 2;
		if (n <= 0)
			printf("0\n");
		if (n > 0)
		{
			if (n % 25 == 0 && n >= 25)
				printf("%d\n", (n / 25));
			else if ((re4 != 0 && re4 >= 1) || (n >= 1))
printf("%d\n", (re4 / 1) + (re3 / 2) + (re2 / 5) + re1 / 10 + (n / 25));
			else if ((re3 != 0 && re3 >= 2) || (n >= 2))
printf("%d\n", (re3 / 2) + (re2 / 5) + re1 / 10 + (n / 25));
			else if ((re3 != 0 && re3 >= 2) || (n >= 2))
printf("%d\n", (re3 / 2) + (re2 / 5) + re1 / 10 + (n / 25));
			else if ((n % 25 != 0 && n % 25 >= 10) || (n >= 10))
				printf("%d\n", re1 / 10 + (n / 25));
		}
	}
	return (0);
}

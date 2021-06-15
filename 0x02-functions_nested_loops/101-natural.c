#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, sum1 = 0, sum2 = 0, sum3 = 0, res;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0)
		{
			sum1 = sum1 + a;
		}
		if (a % 5 == 0)
		{
			sum2 = sum2 + a;
		}
		if (a % 15 == 0)
		{
			sum3 = sum3 + a;
		}
	}
	res = sum1 + sum2 - sum3;
	printf("%d", res);
		printf("\n");
		return (0);
}

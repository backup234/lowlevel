#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alp;

	alp = 'a';
	while ((alp >= 'a') && (alp <= 'z'))
	{
		putchar(alp++);
	}
	putchar('\n');
	return (0);
}

#include "holberton.h"
/**
 * _abs - functon to give absolute value of numbers
 * @i: intiger oo be passed
 * Return: the absoulte value
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);

	return (i * -1);
}

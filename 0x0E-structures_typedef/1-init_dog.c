#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - check the code for Holberton School students.
 *@d: steuct dog
 *@name: name of the dog
 *@age: age of the dog type float
 *@owner: owner of the dog type char
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

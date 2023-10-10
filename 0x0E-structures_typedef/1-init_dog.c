#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - struct var dog.
  *@d: pointer to struct.
  *@name: 1 member.
  *@age: 2 member.
  *@owner: 3 member.
  *
  *Return: void.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

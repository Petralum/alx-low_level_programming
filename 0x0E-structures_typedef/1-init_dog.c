#include "dog.h"

/**
  * int_dog - intializes a variable of type struct dog
  * @d: struct dog
  * @name: first member
  * @age: Second member
  * @owner: Thirs member
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


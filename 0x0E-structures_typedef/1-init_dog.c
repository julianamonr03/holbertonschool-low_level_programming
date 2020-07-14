#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: Structure
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;

		d->name = name;
		d->age = age;
		d->owner = owner;
}

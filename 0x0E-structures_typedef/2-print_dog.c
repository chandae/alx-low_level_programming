#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  prints the struct dog
 * @d: pointer to dog of type struct dog
 *
 * Return: Always (0)
 */

void print_dog(struct * d)
{
if (d != NULL)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n",
	(*d).name != NULL ? d->name : "(nil)",
	(*d).age != NULL ? d->name : "(nil)",
	(*d).owner != NULL ? d->owner : "(nil)");
}
}

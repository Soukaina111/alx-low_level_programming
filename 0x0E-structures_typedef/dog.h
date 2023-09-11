#include <stdlib.h>
#include "dog.h"

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This structure represents a dog and contains
 * its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: name of dog
 * @age:  age of dog
 * @owner: owner of pet
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/

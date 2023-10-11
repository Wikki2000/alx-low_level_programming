#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Store information of a dog
 * @name: Pointer to name of dog
 * @age: Age of the dog
 * @owner: Name of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * dog_t - typedef for struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

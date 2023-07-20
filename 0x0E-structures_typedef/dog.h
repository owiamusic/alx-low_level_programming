#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct
 * @name: dog name
 * @age: age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

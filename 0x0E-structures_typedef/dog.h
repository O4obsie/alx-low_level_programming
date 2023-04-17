#ifndef Struct_DOG
#define Struct_DOG

/**
 * struct dog - structure dog
 * @name: dog anme
 * @age: dog age
 * @owner: owner's dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif

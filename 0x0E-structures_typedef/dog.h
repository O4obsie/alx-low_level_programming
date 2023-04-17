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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

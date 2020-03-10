#ifndef DOG
#define DOG

/**
* struct dog - database for a dog's name, age, and owner
*
* @name: name of dog
* @age: age of dog (in years)
* @owner: name of owner of dog
*
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _strlen(char *s);
void _strcpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif

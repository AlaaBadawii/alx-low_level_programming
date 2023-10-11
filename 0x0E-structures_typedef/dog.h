#ifndef controller
#define controller

typedef struct dog dog_t;

/**
 * struct dog - struct dog
 * @name: member1
 * @age: member2
 * @owner: member3
 *
 * Description:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* controller */

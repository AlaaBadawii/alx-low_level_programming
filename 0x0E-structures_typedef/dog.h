#ifndef controller
#define controller
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
#endif /* controller */

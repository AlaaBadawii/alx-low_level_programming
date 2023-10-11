#include "dog.h"
int _strlen(char *ptr);
void _strcpy(char *dest, char *source);
/**
 * new_dog - function that creates a new dog.
 * @name: char pointer input
 * @age: int input
 * @owner: char pointer input
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_ptr;
	char *cp_name, *cp_owner;
	int len_name, len_owner;

	new_ptr = malloc(sizeof(dog_t));
	if (new_ptr == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	cp_name = malloc(sizeof(char) * len_name + 1);
	if (cp_name == NULL)
		return (NULL);
	_strcpy(cp_name, name);

	cp_owner = malloc(sizeof(char) * len_owner + 1);
	if (cp_owner == NULL)
		return (NULL);
	_strcpy(cp_owner, owner);

	new_ptr -> name = cp_name;
	new_ptr -> age = age;
	new_ptr -> owner = cp_owner;

	return (new_ptr);
}

/**
 * _strlen - count len of string
 * @ptr: char pointer input
 * Return: len
 */
int _strlen(char *ptr)
{
	int len = 0;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	
	return (len);
}

/**
 * _strcpy - copy string
 * @dest: char pointer input 
 * @source: char pointer input
 */
void _strcpy(char *dest, char *source)
{
	int i = 0;

	while (*(source + i) != '\0')
	{
		*(dest + i) = *(source + i);
		i++;
	}

	*(dest + i) = '\0';
}

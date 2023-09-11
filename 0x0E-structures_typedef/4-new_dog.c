#include "dog.h"
#include <stdlib.h>

/**
 * _strlen -  a function that returns the length of a string.
 * @s : input str
 *
 * Return: the length of a string.
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}

/**
 * _strcopy - a function that copies a string.
 *
 * @dest: pointeer input
 * @src: pointer input
 *
 * Return: dest
*/

char *_strcopy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l]; l++)
		dest[l] = src[l];
	dest[l] = '\0';

	return (dest);
}

/**
 * *new_dog -  a function that creates a new dog
 *
 * @name: dog_t name
 * @age:  dog_t age
 * @owner: dog_t owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

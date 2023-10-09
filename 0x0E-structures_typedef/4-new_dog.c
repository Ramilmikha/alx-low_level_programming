#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates new dog
* @name: name of dog
* @age: age of dog
* @owner: dog owner
* Return: pointer
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->age = age;
new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
return (new_dog);
}

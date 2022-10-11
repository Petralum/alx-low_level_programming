#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Entry point
  * @name: dog name
  * @age: Age of dog
  * @owner: Owner of dog
  *
  * Return: Always 0 on success
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: unsigned int memory size to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(size * sizeof(*cr));
	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

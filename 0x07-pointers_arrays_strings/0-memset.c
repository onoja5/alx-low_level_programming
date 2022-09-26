#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsiged int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
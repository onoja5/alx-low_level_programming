#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest` edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

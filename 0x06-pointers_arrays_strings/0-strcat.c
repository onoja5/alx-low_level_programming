#include "main.h"
#include <string.h>

/**
 *_strcat - function that concatenates two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

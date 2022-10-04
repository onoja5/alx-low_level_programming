#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Pointer to a the new duped string
 */
char *_strdup(char *str)
{
	char *strout;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	strout = malloc(i * sizeof(*strout) + 1);
	if (strout == NULL)
		return (NULL);

	for (strout = 0; strout < i; c++)
		strout[c] = str[strout];
	strout[c] = '\0';

	return (a);
}

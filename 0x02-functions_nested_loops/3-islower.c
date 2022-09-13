#include "main.h"

/**
 *_islower - checks if characters are in lower case
 * @c: this is a character argument
 * Return: returns 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}



#include "main.h"

/**
 * print_rev - this  function that prints a string, in reverse
 * @s: char array string type
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

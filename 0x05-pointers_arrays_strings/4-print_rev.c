#include "main.h"

/**
 * print_rev - this  function that prints a string, in reverse
 * @s: char array string type
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\n')
			break;
		count++;
	}
	for (count--; count >= 0; count--)

		_putchar(s[count]);
	_putchar('\n');
}

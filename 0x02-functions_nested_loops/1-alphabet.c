#include "main.h"

/**
 * main - this prints the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0
 */

void print_alphabet(void);
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

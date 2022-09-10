#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This prints the aphabets without q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

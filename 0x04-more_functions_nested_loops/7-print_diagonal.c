#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the '\' line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		c--;
	}
	if (c < 1)
		_putchar('\n');
}


#include <stdio.h>

/**
 * main - This prints numbers from 00 to 99
 *
 * Return: Always 0
 */
int main(void)
{
	int i, e;

	i = 48;
	i = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 57)
			{
				break
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

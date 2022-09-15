#include "main.h"

/**
 * _isupper - This is a functions that checks for uppercase character
 * @c: insert character
 * Return: integer 1 if is an uppercase letter and 0 if is false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

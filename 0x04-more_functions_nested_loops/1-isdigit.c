#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9
 * @c: insert number
 * Return: interger 1 is reurn if number is 0 to 9 and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: char string
 * @f: function pointer that takes a string argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 *
 * @name: a name
 *
 * @f: pointer to name printing functions
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	(*f)(name);
	}
}

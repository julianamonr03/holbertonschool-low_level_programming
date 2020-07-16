#include "function_pointers.h"
/**
 * print_name - Functions that prints a name
 * @name: String given
 * @f: Function
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "holberton.h"
/**
 * swap_int - Entry point
 *@a: integer
 *@b: integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

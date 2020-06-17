#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: integer number
 * print numbers to 98
 */
void print_to_98(int n)
{
	int m;

	if (n < 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d, ", m);
		}
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d, ", m);
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}

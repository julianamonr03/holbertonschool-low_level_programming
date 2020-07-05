#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- Entry point adds positive numbers
 * @argc: size of numbers
 * @argv: size of Array
 * Return: 0  positive number or 1 if contains symbols that aren't digits
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != 0; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

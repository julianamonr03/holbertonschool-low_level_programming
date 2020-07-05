#include <stdio.h>
/**
 * main - Function entry point Prints all arguments ir receives
 * @argc: # Of arguments
 * @argv: size of String of arguments
 * Return: to zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

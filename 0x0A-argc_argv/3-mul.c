#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function Entry point multiplies
 * @argc: Size of arguments
 * @argv: Size of array
 * Return: No return
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

#include "3-calc.h"
/**
 * main - Main function
 * @argv: # of arguments
 * @argc: Array of arguments
 * Return: 0 success, 98 if not enought arguments,
 */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}

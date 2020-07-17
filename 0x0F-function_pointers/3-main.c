#include "3-calc.h"
/**
 * main - Main function
 * @argv: # of arguments
 * @argc: Array of arguments
 * Return: 0 success, 98 if not enought arguments,
 */
int main(int argv, char *argc[])
{
	int (*operator)(int, int);
	int num1, num2;

	if (argv != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argc[1]);
	num2 = atoi(argc[3]);

	operator = get_op_func(argc[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argc[2] == '/' || *argc[2] == '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}

#include "holberton.h"
/**
 * argstostr - Functions that concatenates all the arguments of the program
 * @ac: # of integers given
 * @av: Array of arguments
 * Return: a pointer to a new string or null if it fails
 */
char *argstostr(int ac, char **av)
{
	int cont1 = 0, cont2, lng = 0, cont3;
	char *str;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (cont1 = 0; cont1 < ac; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2] != '\0'; cont2++)
			;
		lng += cont2 + 1;
	}

	str = malloc(sizeof(char) * lng + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	cont3 = 0;
	for (cont1 = 0; cont1 < ac; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2]; cont2++)
		{
			str[cont3] = av[cont1][cont2];
			cont3++;
		}
		str[cont3] = '\n';
		cont3++;
	}
	str[lng] = '\0';

	return (str);
}

#include "holberton.h"
/**
 * numero_primo - Find prime number
 * @x: variable
 * @n: number
 * Return: Function
 */
int numero_primo(int x, int n)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x == n / 2)
	{
		return (1);
	}
	++x;
	return (numero_primo(x, n));
}
/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: variable
 * Return: 1 if is prime or 0 if is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (numero_primo(2, n));
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * last digit number
 * print greater than 5
 * print equal 0
 * print less than 6 and not 0
 * Return: Always 0
 */
int main(void)
{
int n;
int lastdigit;
lastdigit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastdigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("Last digit of %d id %d and is 0\n", n, lastdigit);
}
else
{
printf("Last digit of %d is % and is less than 6 and not 0\n", n, lastdigit);
return (0);
}

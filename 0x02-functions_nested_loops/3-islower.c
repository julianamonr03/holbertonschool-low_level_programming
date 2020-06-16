#include "holberton.h"
int _islower(int c)
{
	int a;
	a = islower(c);
	if (a == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

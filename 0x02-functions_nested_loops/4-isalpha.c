#include "holberton.h"
int _isalpha(int c)
{
	int b;
	b = isalpha(c);
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}

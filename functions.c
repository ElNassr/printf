#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * len - function that returns the number of digit in an integer
 * @n: number to calculate the len of
 *
 * Return: give back the len of a number
 */
int len(int n)
{
	int l = 1000000000;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if ((n / l) != 0)
		{
			return (i);
		}
		l /= 10;
	}
	return (i);
}

/**
 * print_number - print numbers from input
 * @n: input number to print
 *
 * No return value
 */
void print_number(int n)
{
	int i = 48;
	int m = 45;
	int c = 0;
	int d = 0;
	int l = 1000000000;
	int k = 0;
	int x = n;

	k = len(n);
	if (n < 0)
	{
		_putchar(m);
		x = n + 1;
		x = - x;
	}
	for (c = 0; c < 9; c++)
	{
		if (c >= k)
		{
			for (d = 0; d < 10; d++)
			{
				if ((x / l) == d)
				{
					i += d;
					_putchar(i);
				}
			}
		}
		x = x % l;
		l /= 10;
		i = 48;
	}
	if (n < 0)
	{
		_putchar((i + 1 + (x % 10)));
	}
	else
	{
		_putchar((i + (x % 10)));
	}
}

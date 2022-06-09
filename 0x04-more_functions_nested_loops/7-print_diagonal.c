#include "main.h"

/**
 * * print_diagonal -  a function that draws a diagonal line on the terminal
 *
 * * @n: input number of times '\' should be printed
 *
 * * Return: a diagonal
 */

void print_diagonal(int n)
{
	int ch, in;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (ch = 1; ch <= n; ch++)
	{
	for (in = 1; in < ch; in++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}


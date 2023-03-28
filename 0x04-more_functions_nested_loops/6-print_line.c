#include "main.h"
/**
 * print_line - function print line
 * @n: should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
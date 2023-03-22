#include "main.h"
/**
 * print_last_digit - function printed last number
 * @i: parameter to be printed
 * Return: always j
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}

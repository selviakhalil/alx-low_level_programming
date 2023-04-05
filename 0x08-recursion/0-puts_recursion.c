#include "main.h"
/**
 * _puts_recursion - function print string
 * @s: pointer to the string
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

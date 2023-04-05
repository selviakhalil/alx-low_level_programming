#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: pointer to string
 * Return: return lenght
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}

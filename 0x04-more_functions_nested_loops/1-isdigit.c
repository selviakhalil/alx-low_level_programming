#include "main.h"
/**
 * _isdigit - function check if c digit
 * @c: to be checked
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - function print lowercase and uppercase
 * @c: parameter to be printed
 * Return: 1 if is lowercase or upper case otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

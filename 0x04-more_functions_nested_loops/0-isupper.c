#include "main.h"
/**
 * _isupper - function check uppercase
 * @c: to be checkded
 * Return: 1 if uppercase and 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

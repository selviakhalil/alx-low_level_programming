#include "main.h"
/**
 * _abs - function print absolute value
 * @a: parameter to be printed
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

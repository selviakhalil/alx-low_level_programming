#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 , s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		for (j = 0 ; s2[j] != '\0' ; j++)
			con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0 ; s2[j] != '\0' ; j++, i++)
	{
		con[i] = s2[j];
	}
	con[i] = '\0';
	return (con);
}
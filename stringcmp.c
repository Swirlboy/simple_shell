#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if s1 and s2 are equals,
 * and number > 0 if s1 is greater while number
 * number < 0 if s2 is greater.
 */
int _strcmp(char *s1, char *s2)
{

	int i = 0, rv = 0;

	while (rv == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		break;
		rv = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (rv);

}

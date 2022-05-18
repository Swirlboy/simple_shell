#include "shell.h"
/**
 * _strlen - Holds the length of string char *str
 * @str: String whose length is to be found
 *
 * Return: The length ot the string
 */

int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;
	return (len);
}

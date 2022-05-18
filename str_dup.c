#include "shell.h"
/**
 * _strdup - string duplicate
 * @str: Input String to be duplicated
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int k, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (k = 0; k <= len; k++)
	{
		dup[k] = str[k];
	}
	return (dup);
}

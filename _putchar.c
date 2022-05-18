#include "shell.h"

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success while -1 is returned
 * on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "shell.h"
/**
 * _mprint - Prints the prompt in the standard input
 * @size: input lenght of string
 * @prompt: input Pointer to the string to be printed
 * Return: 0 if success or -1 if fails
 */
int _mprint(const char *prompt, unsigned int size)
{
	int insert = 0;

	if (isatty(STDIN_FILENO))
	{
		insert = write(1, prompt, size);
		if (insert == -1)
			return (-1);
	}
		return (0);
}

#include "shell.h"
/**
 * getbuiltins - Evaluates if user's command arguments are
 * amongst inbuilts command.
 * @arguments: Pointer to the array of command  arguments
 * @exit_stat: Current exit status
 * Return: -1 if the command is not a builtin, 0 if it is
 */
int getbuiltins(char **arguments, int exit_stat)
{
	char *builtins[2] = {
		"exit",
		"env"
	};
	int i = 0;

	while (i < 2)
	{
		if (_strcmp(arguments[0], builtins[i]) == 0)
			break;
		i++;
	}
	if (i == 2)
		return (-1);
	if (_strcmp(builtins[i], "exit") == 0)
	{
		free(arguments[0]);
		exit(exit_stat);
	}
	if (_strcmp(builtins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}

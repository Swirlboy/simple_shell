#include "shell.h"
/**
 * p_error - Prints error message when a command is not found
 * @arguments: array of args typed by the user
 * @counter: Times that the shell has been executed
 * Return: Exit status
 */
int p_error(char **arguments, int counter)
{
	char *interactive_mode = "hsh";
	char *non_intr_mode = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, interactive_mode, 3);
	else
	{
		write(2, non_intr_mode, 5);
	}
	write(2, ": ", 2);
	err_stat(counter);
	write(2, ": ", 2);
	write(2, arguments[0], _strlen(arguments[0]));
	write(2, ": not found\n", 12);
	return (127);
}

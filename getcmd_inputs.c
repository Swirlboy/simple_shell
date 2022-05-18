#include "shell.h"
/**
 * getcmd_inputs - Fill an array with every input from user
 * @entry: input String
 * @arguments: input array to be filled
 * Return: Length of the array
 */

int getcmd_inputs(char *entry, char **arguments)
{
	int i = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r "); /**Extract the command 0 */
	arguments[i] = command; /**Stores command 1 in args*/
	while (aux != NULL) /**As long as they have tokens*/
	{
		++i;
		options = strtok(NULL, "\n\t\r "); /**Stores the n argument in parameter*/
		aux = options;
		arguments[i] = options; /**store parameter i in args[i]*/
	}
	arguments[i] = NULL; /**Mark the end array*/
	return (i); /**Returns the length of args[]*/
}
